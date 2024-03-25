#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    const std::string databaseFilePath = "data.csv";
    std::ifstream file(databaseFilePath);
    std::string line;
    std::getline(file, line);
    while (std::getline(file, line))
    {
        std::istringstream iss(line);
        std::string date;
        float value;

        if (std::getline(iss, date, ',') && iss >> value)
                exchangeRates[date] = value;
           
    }
    file.close();
}

int count_points(std::string value)
{
    int count = 0;
    for(size_t i = 0; i < value.size(); i++)
    {
        if(value[i] == '.')
            count++;
    }
    return count;
}

bool pars_value(std::string value)
{
    std::cout << "value: " << value << std::endl;
    if(value[0] != ' ')
    {
        std::cerr << "Error: bad value => " << value << std::endl;
        return false;
    }
    for(size_t i = 0; i < value.size(); i++)
    {
        if( i == 0)
            i++;
        if(count_points(value) > 1 || (!std::isdigit(value[i]) && value[i] != '.' && value[i] != '+'))
        {
            std::cerr << "Error: bad value => " << value << std::endl;
            return false;
        }
        if (value[i] == '.')
        {
            if(i == 0 || i == value.size() - 1)
            {
                std::cerr << "--Error: bad value => " << value << std::endl;
                return false;
            }
        }
    }
    return true;
}

void BitcoinExchange::processInputFile(const std::string& inputFile)
{
    std::ifstream file(inputFile);
    if (!file)
    {
        std::cerr << "Error: could not open file." << std::endl;
        return;
    }

    std::string line;
    std::getline(file, line);
    if (line != "date | value")
    {
        std::cerr << "Error: bad input => " << line << std::endl;
        return;
    }
    while (std::getline(file, line))
    {
        std::istringstream iss(line);
        std::string date;
        std::string value;
        float exchangeRate;

        if (std::getline(iss, date, '|'))
        {
            if (isValidDate(date))
            {
                std::string closestDate = getClosestDate(date);
                exchangeRate = exchangeRates[closestDate];
            }
            else
            {
                std::cerr << "Error: bad input => " << date << std::endl;
                continue;
            }
        }
        if (std::getline(iss, value) && pars_value(value))
        {
            std::cout << "value: " << value << std::endl;
            float value_f;
            std::istringstream(value) >> value_f;
            std::cout << "value_f: " << value_f << std::endl;
            if(!isValidValue(value_f))
                continue;
            else
            {
                float result = value_f * exchangeRate;
                std::cout << date << " => " << value_f << " = " << result << std::endl;
            }
        }
    }
    file.close();
}

bool BitcoinExchange::isValidDate(const std::string& date) const 
{
    std::cout << "datesize: " << date.size() << std::endl;
    int year = (date[0] - '0') * 1000 + (date[1] - '0') * 100 + (date[2] - '0') * 10 + (date[3] - '0');
    int month = (date[5] - '0') * 10 + (date[6] - '0');
    int day = (date[8] - '0') * 10 + (date[9] - '0');

    if (date.size() != 11)
        return false;
    if (!std::isdigit(date[0]) || !std::isdigit(date[1]) ||
        !std::isdigit(date[2]) || !std::isdigit(date[3]) ||
        date[4] != '-' || !std::isdigit(date[5]) || 
        !std::isdigit(date[6]) || date[7] != '-' || !std::isdigit(date[8]) || !std::isdigit(date[9]))
    {
        return false;
    }

    if (month < 1 || month > 12)
        return false;
    if (day < 1 || day > 31) 
        return false;
    if (month == 2) 
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
        {
            if (day > 29) 
                return false;
        } 
        else 
        {
            if (day > 28) 
                return false;
        }
    } 
    else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) 
        return false;
    return true;
}


bool BitcoinExchange::isValidValue(float value) const
{
    if (value < 0)
    {
        std::cerr << "Error: not a positive number." << std::endl;
        return false;
    }
    else if (value > 1000)
    {
        std::cerr << "Error: too large a number." << std::endl;
        return false;
    }
    return (true);
}

std::string BitcoinExchange::getClosestDate(const std::string& date) const
{
        std::map<std::string, float>::const_iterator it = exchangeRates.lower_bound(date);
        if (it == exchangeRates.begin())
        {
                std::cout<< "it->first: " << it->first << std::endl;
                return it->first;
        }
        else if (it == exchangeRates.end())
        {
            std::map<std::string, float>::const_iterator temp = it;
            temp--;
            return temp->first;
        }
        else
        {
            it--;
            return it->first;
        }
    return "";
}
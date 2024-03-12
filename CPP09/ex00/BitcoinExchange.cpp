#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange()
{
    const std::string databaseFilePath = "data.csv";
    std::ifstream file(databaseFilePath);
    if (!file)
    {
        std::cerr << "Error: could not open file." << std::endl;
        return;
    }

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
        float value;

        if (std::getline(iss, date, '|') && iss >> value)
        {
            if (isValidDate(date) && isValidValue(value))
            {
                std::string closestDate = getClosestDate(date);
                float exchangeRate = exchangeRates[closestDate];

                float result = value * exchangeRate;
                std::cout << date << " => " << value << " = " << result << std::endl;
            }
        }
        else
            std::cerr << "Error: bad input => " << line << std::endl;
    }
    file.close();
}

bool BitcoinExchange::isValidDate(const std::string& date) const
{
    if (date.size() != 11)
        return false;
    if (!std::isdigit(date[0]) || !std::isdigit(date[1]) ||
        !std::isdigit(date[2]) || !std::isdigit(date[3]) ||
        date[4] != '-' ||
        !std::isdigit(date[5]) || !std::isdigit(date[6]) ||
        date[7] != '-' ||
        !std::isdigit(date[8]) || !std::isdigit(date[9]) || date[10] != ' ')
    {
        return false;
    }

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
            return it->first;
        else if (it == exchangeRates.end())
        {
            std::map<std::string, float>::const_iterator temp = it;
            --temp;
            return temp->first;
        }
        else
        {
            --it;
            return it->first; 
        }


}
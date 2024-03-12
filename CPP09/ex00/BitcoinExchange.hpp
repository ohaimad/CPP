#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>

class BitcoinExchange
{
public:
    BitcoinExchange();
    void processInputFile(const std::string& inputFile);
    bool isValidDate(const std::string& date) const;
    bool isValidValue(float value) const;

private:
    std::map<std::string, float> exchangeRates;
    std::string getClosestDate(const std::string& date) const;
};

#endif
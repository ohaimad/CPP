/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 00:21:38 by ohaimad           #+#    #+#             */
/*   Updated: 2024/02/09 00:02:15 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void ScalarConverter::convert(const std::string& literal)
{
    std::istringstream iss(literal);
    double value;
    char *convert;

    value = std::strtod(literal.c_str() , &convert);
    if (value == 0 && std::strlen(convert) == 1 && !std::isdigit(convert[0]))
        convertToChar(convert, literal);
    else if(literal.find('.') == std::string::npos && !convert[0])
        convertToInt(value);
    else if (literal.find('.') != std::string::npos && convert[0] == 'f')
        convertToFloat(value);
    else if (literal.find('.') != std::string::npos && !convert[0])
        convertToDouble(value);
    else
    {
        std::cout << "int: impossible" << std::endl;
        std::cout << "char: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }
}

void convertToChar(char *convert, std::string input)
{
    if (isprint(convert[0]))
        std::cout << "char: '" << convert << "'" << std::endl;
    else if (!isprint(convert[0]))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: impossible" << std::endl;
    std::cout << "int: " << static_cast<int>(*input.c_str()) << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(*input.c_str()) << "f" <<  std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(*input.c_str()) << std::endl;
}

void convertToInt(double value)
{
    if ((value < INT_MIN || value > INT_MAX) || std::isnan(value))
    {
        std::cout << "int: impossible" << std::endl;
        std::cout << "char: impossible" << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" <<  std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << (value) << std::endl;   
    }
    else
    {
        std::cout << "int: " << static_cast<int>(value) << std::endl;
        if (isprint(static_cast<int>(value)))
            std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" <<  std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << (value) << std::endl;   
    }
}

void convertToFloat(double value)
{
    if (value < INT_MIN || value > INT_MAX)
    {
        std::cout << "int: impossible" << std::endl;
        std::cout << "char: impossible" << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" <<  std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << (value) << std::endl;   
    }
    else
    {
        std::cout << "int: " << static_cast<int>(value) << std::endl;
        if (isprint(static_cast<int>(value)))
            std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" <<  std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << (value) << std::endl;   
    }
}

void convertToDouble(double value)
{
    if (value < INT_MIN || value > INT_MAX)
    {
        std::cout << "int: impossible" << std::endl;
        std::cout << "char: impossible" << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" <<  std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << (value) << std::endl;   
    }
    else
    {
        std::cout << "int: " << static_cast<int>(value) << std::endl;
        if (isprint(static_cast<int>(value)))
            std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" <<  std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << (value) << std::endl;   
    }
}
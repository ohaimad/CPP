/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 00:21:38 by ohaimad           #+#    #+#             */
/*   Updated: 2024/02/07 02:54:55 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void ScalarConverter::convert(const std::string& literal) 
{
    std::istringstream iss(literal);
    double value;
    bool isFloatLiteral = false;

    if (!literal.empty() && literal[literal.size() - 1] == 'f')
        isFloatLiteral = true;
    std::atof(literal.c_str());
    std::cout << "---->" << literal << std::endl;
    iss >> value;
    std::cout << "---->" << value << std::endl;
    if (iss >> value)
    {
        // Conversion to Char
        if (value >= std::numeric_limits<char>::min() && value <= std::numeric_limits<char>::max()) 
        {
            char charValue = static_cast<char>(value);
            if (isprint(charValue))
                std::cout << "char: '" << charValue << "'" << std::endl;
            else
                std::cout << "char: Non displayable" << std::endl;
        }
        else
            std::cout << "char: impossible" << std::endl;

        // Conversion to int
        if (value >= std::numeric_limits<int>::min() && value <= std::numeric_limits<int>::max())
            std::cout << "int: " << static_cast<int>(value) << std::endl;
        else
            std::cout << "int: impossible" << std::endl;

        // Conversion to float
        if (isFloatLiteral)
            std::cout << "float: " << value << "f" << std::endl;
        else 
        {
            float floatValue = static_cast<float>(value);
            if (value != value)
                std::cout << "float: nanf" << std::endl;
            else
            {
                // Check for infinite values
                if (!isfinite(floatValue)) 
                {
                    std::cout << "float: ";
                    if (value < 0)
                        std::cout << "-";
                    std::cout << "inf" << "f" << std::endl;
                }
                else
                    std::cout << "float: " << std::fixed << std::setprecision(1) << floatValue << "f" << std::endl;
            }
        }
        std::cout << "double: " << value << std::endl;
    } 
    else {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }
}

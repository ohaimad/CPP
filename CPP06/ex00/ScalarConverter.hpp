/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 00:21:45 by ohaimad           #+#    #+#             */
/*   Updated: 2024/02/08 23:01:13 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>
#include <sstream>
#include <limits>
#include <stdlib.h>
#include <cmath>
#include <iomanip>


class ScalarConverter {
    public:
        static void convert(const std::string& literal);
};

void convertToChar(char *convert, std::string input);
void convertToInt(double value);
void convertToFloat(double value);
void convertToDouble(double value);

#endif


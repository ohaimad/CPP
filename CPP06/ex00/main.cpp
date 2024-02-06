/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 00:20:14 by ohaimad           #+#    #+#             */
/*   Updated: 2024/02/06 20:29:33 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char* av[]) {
    if (ac != 2)
    {
        std::cerr << "Usage: " << av[0] << " smtng " << std::endl;
        return 1;
    }
    std::string literal = av[1];
    ScalarConverter::convert(literal);
    return 0;
}

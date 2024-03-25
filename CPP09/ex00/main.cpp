/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:12:02 by ohaimad           #+#    #+#             */
/*   Updated: 2024/03/25 22:01:21 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char* av[])
{
    if (ac != 2)
    {
        std::cerr << "Error: could not open file. "<< std::endl;
        return 1;
    }

    BitcoinExchange bitcoinExchange;
    bitcoinExchange.processInputFile(av[1]);

    return 0;
}

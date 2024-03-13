/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:12:02 by ohaimad           #+#    #+#             */
/*   Updated: 2024/03/13 14:30:03 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char* av[]) 
{
    if (ac != 2) {
        std::cout << "Usage: " << av[0] << " <expression>" << std::endl;
        return 1;
    }

    std::string expression = av[1];
    int result = evaluate(expression);
    if (result != 0)
        std::cout << result << std::endl;

    return 0;
}


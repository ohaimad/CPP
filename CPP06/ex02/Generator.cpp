/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Generator.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 22:42:55 by ohaimad           #+#    #+#             */
/*   Updated: 2024/02/06 22:45:28 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Generator.hpp"

Base* Generator::generate() 
{
    std::srand(std::time(0));
    int choice = std::rand() % 3;

    switch (choice) {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
        default:
            return nullptr;
    }
}

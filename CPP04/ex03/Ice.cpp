/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 21:07:38 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/04 21:11:02 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() {
    type = "cure";
}

Ice::~Ice() {
}

Ice::Ice(const Ice& copy) {
    *this = copy;
}

Ice& Ice::operator=(const Ice& obj) {
    if (this != &obj) 
        *this = obj;
    return (*this);
}

AMateria* Ice::clone() const
{
    return new Ice();
}
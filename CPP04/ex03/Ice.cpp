/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 21:07:38 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/06 13:24:27 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() {
    type = "ice";
}

Ice::~Ice() {
}

Ice::Ice(const Ice& copy) {
    *this = copy;
}

Ice& Ice::operator=(const Ice &obj) {
    if (this != &obj) 
        this->type = obj.type;
    return (*this);
}

AMateria* Ice::clone() const
{
    return new Ice();
}

void Ice::use(ICharacter& target){
    std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}
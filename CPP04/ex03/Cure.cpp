/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 20:58:32 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/05 19:28:12 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(){    
    type = "cure";
}

Cure::~Cure() {
    std::cout << "drived" << std::endl;

}

Cure::Cure(const Cure& copy) {
    *this = copy;
}

Cure& Cure::operator=(const Cure& obj) {
    if (this != &obj) 
        *this = obj;
    return (*this);
}

AMateria* Cure::clone() const
{
    return new Cure();
}

void Cure::use(ICharacter& target){
    
}
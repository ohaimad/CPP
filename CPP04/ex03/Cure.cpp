/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 20:58:32 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/06 13:21:29 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(){    
    type = "cure";
}

Cure::~Cure() {
}

Cure::Cure(const Cure& copy) {
    *this = copy;
}

Cure& Cure::operator=(const Cure& obj) {
    if (this != &obj) 
        this->type = obj.type;
    return (*this);
}

AMateria* Cure::clone() const
{
    return new Cure();
}

void Cure::use(ICharacter& target){
    std::cout << "* heals "<< target.getName() << "'s wounds *" << std::endl;
}
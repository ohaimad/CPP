/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 19:35:41 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/05 19:32:25 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


AMateria::AMateria() {
}

AMateria::~AMateria() {
    // std::cout << "base" << std::endl;
}

AMateria::AMateria(const AMateria& copy) {
    *this = copy;
}

AMateria& AMateria::operator=(const AMateria& obj) {
    if (this != &obj) 
        *this = obj;
    return (*this);
}


void AMateria::use(ICharacter& target)
{

}
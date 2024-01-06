/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 19:35:41 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/06 13:14:35 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


AMateria::AMateria() {
}

AMateria::~AMateria() {
    // std::cout << "base" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
    this->type = type;
}

AMateria::AMateria(const AMateria& copy) {
    *this = copy;
}

AMateria& AMateria::operator=(const AMateria& obj) {
    if (this != &obj) 
        type= obj.type;
    return (*this);
}


void AMateria::use(ICharacter& target)
{
    (void)target;
}
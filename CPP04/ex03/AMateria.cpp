/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 19:35:41 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/04 21:44:04 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp" 

#include "AMateria.hpp"

AMateria::AMateria() {
}

AMateria::~AMateria() {
}

AMateria::AMateria(const AMateria& copy) {
    *this = copy;
}

AMateria& AMateria::operator=(const AMateria& obj) {
    if (this != &obj) 
        *this = obj;
    return (*this);
}

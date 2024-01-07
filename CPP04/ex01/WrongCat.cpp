/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 12:04:57 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/07 16:31:29 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << "Constructor" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "Distructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) {
    std::cout << " copy Constructer " << std::endl;
    *this = copy;
}
void WrongCat::makeSound() const{
    std::cout << "test wrong cat" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& obj) {
    if (this != &obj)
        this->type = obj.type;
    return (*this);
}

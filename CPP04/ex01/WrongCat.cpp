/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 12:04:57 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/03 23:11:31 by ohaimad          ###   ########.fr       */
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
    *this = copy;
}
void WrongCat::makeSound() const{
    std::cout << "test wrong cat" << std::endl;
}
WrongCat& WrongCat::operator=(const WrongCat& obj) {
    if (this != &obj)
        *this = obj;
    return (*this);
}
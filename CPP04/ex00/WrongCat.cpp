/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 12:04:57 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/03 23:05:44 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
}

WrongCat::~WrongCat() {
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
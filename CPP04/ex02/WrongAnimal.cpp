/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 19:11:23 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/03 23:10:18 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "Constructor" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "Distructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) {
    *this = copy;
}

void WrongAnimal::makeSound() const{
    std::cout << "WrongAnimal sound" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj) {
    if (this != &obj) 
        *this = obj;
    return (*this);
}
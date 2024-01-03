/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 11:30:35 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/04 00:21:06 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Animal Constructer " << type << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal Distructer " << type << std::endl;
}

Animal::Animal(const Animal& copy) {
    *this = copy;
}

Animal& Animal::operator=(const Animal& obj) {
    if (this != &obj)
        *this = obj;
    return (*this);
}

void Animal::makeSound() const{
    std::cout << "Some generic animal sound" << std::endl;
}

std::string Animal::getType() const {
    return type;
}
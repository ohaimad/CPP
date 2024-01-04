/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 11:31:04 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/03 23:46:58 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : type("Dog"){
    std::cout << "Constructed a Dog" << std::endl;
    dmagh = new Brain();
}

Dog::~Dog() {
    std::cout << "Destroyed a Dog" << std::endl;
    delete dmagh;
}

Dog::Dog(const Dog& copy) {
    *this = copy;
}

Dog& Dog::operator=(const Dog& obj) {
    if (this != &obj)
        *this = obj;
    return (*this);
}

void Dog::makeSound() const{
    std::cout << "Bark! Bark!" << std::endl;
}
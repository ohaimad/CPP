/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 11:31:04 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/07 15:36:05 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    type = "Dog";
    std::cout << "Constructed a Dog" << std::endl;
    dmagh = new Brain();
}

Dog::~Dog() {
    std::cout << "Destroyed a Dog" << std::endl;
    delete dmagh;
}

Dog::Dog(const Dog& copy) {
    dmagh = new Brain();
    *this = copy;
}

Dog& Dog::operator=(const Dog& obj) {
    if (this != &obj) 
    {
        for (size_t i = 0; i < 100; i++)
            dmagh->ideas[i] = obj.dmagh->ideas[i];
        this->type = obj.type;
    }
    return (*this);
}

void Dog::makeSound() const{
    std::cout << "Bark! Bark!" << std::endl;
}
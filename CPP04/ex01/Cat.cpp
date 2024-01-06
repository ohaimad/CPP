/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 11:30:52 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/06 16:39:11 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    type = "Cat";
    std::cout << "Constructed a Cat" << std::endl;
    dmagh = new Brain();
}

Cat::~Cat() {
    std::cout << "Destroyed a Cat" << std::endl;
    delete dmagh;
}

Cat::Cat(const Cat& copy) {
    *this = copy;
}

Cat& Cat::operator=(const Cat& obj) {
    if (this != &obj) 
        this->type = obj.type;
    return (*this);
}

void Cat::makeSound() const{
    std::cout << "Meow! Meow!" << std::endl;
}
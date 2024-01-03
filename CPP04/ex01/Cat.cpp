/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 11:30:52 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/03 19:09:20 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : type("Cat"){
    std::cout << "Constructed a Cat" << std::endl;
}

Cat::~Cat() {
    std::cout << "Destroyed a Cat" << std::endl;
}

Cat::Cat(const Cat& copy) {
    *this = copy;
}

Cat& Cat::operator=(const Cat& obj) {
    if (this != &obj)
        *this = obj;
    return (*this);
}

void Cat::makeSound() const{
    std::cout << "Meow! Meow!" << std::endl;
}
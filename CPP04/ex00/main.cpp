/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 23:05:04 by otmane            #+#    #+#             */
/*   Updated: 2023/12/30 16:16:55 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Animal::Animal() : type("Generic Animal") {
    std::cout << "Constructed an Animal of type: " << type << std::endl;
}

Animal::~Animal() {
    std::cout << "Destroyed an Animal of type: " << type << std::endl;
}

void Animal::makeSound() const {
    std::cout << "Some generic animal sound" << std::endl;
}

std::string Animal::getType() const {
    return type;
}

Dog::Dog() {
    type = "Dog";
    std::cout << "Constructed a Dog" << std::endl;
}

Dog::~Dog() {
    std::cout << "Destroyed a Dog" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Bark! Bark!" << std::endl;
}

Cat::Cat() {
    type = "Cat";
    std::cout << "Constructed a Cat" << std::endl;
}

Cat::~Cat() {
    std::cout << "Destroyed a Cat" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow! Meow!" << std::endl;
}

WrongAnimal::WrongAnimal() {
    std::cout << "Constructed a WrongAnimal" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "Destroyed a WrongAnimal" << std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout << "Some wrong animal sound" << std::endl;
}

WrongCat::WrongCat() {
    std::cout << "Constructed a WrongCat" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "Destroyed a WrongCat" << std::endl;
}

int main() {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* wrong = new WrongCat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound();  // will output the cat sound!
    j->makeSound();
    meta->makeSound();

    // Testing with WrongCat
    wrong->makeSound();  // will output the wrong animal sound

    delete meta;
    delete j;
    delete i;
    delete wrong;

    return 0;
}


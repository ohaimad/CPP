/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 23:05:04 by otmane            #+#    #+#             */
/*   Updated: 2023/12/30 19:41:51 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Brain::Brain(){
    std::cout << "Brain created." << std::endl ;
}

Brain::~Brain(){
    std::cout << "Brain destroyed." << std::endl;
}

Animal::Animal(const std::string& animalType) : type(animalType) {
    std::cout << "Constructed an " << type << std::endl;
}

Animal::~Animal() {
    std::cout << "Destroyed an " << type << std::endl;
}

// Member function to make sound
void Animal::makeSound() const {
    std::cout << "Some generic animal sound" << std::endl;
}

std::string Animal::getType() const {
    return type;
}

Dog::Dog() : Animal("Dog"), brain(new Brain()) {
    std::cout << "Constructed a Dog" << std::endl;
}

Dog::~Dog() {
    delete brain;
    std::cout << "Destroyed a Dog" << std::endl;
}

// Override makeSound for Dog
void Dog::makeSound() const {
    std::cout << "Bark! Bark!" << std::endl;
}

Cat::Cat() : Animal("Cat"), brain(new Brain()) {
    std::cout << "Constructed a Cat" << std::endl;
}

Cat::~Cat() {
    delete brain;
    std::cout << "Destroyed a Cat" << std::endl;
}

// Override makeSound for Cat
void Cat::makeSound() const {
    std::cout << "Meow! Meow!" << std::endl;
}

WrongAnimal::WrongAnimal() {
    std::cout << "Constructed a WrongAnimal" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "Destroyed a WrongAnimal" << std::endl;
}

// Member function to make sound (wrong version)
void WrongAnimal::makeSound() const {
    std::cout << "Some wrong animal sound" << std::endl;
}

WrongCat::WrongCat() {
    std::cout << "Constructed a WrongCat" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "Destroyed a WrongCat" << std::endl;
}

void    f()
{
    system("leaks Animals");
}
int main() {
atexit(f);
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;
delete i;
return 0;
}

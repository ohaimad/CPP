/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 23:05:04 by otmane            #+#    #+#             */
/*   Updated: 2024/01/03 23:07:50 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* x = new WrongCat();

    std::cout << j->getType() << "" << std::endl;
    std::cout << i->getType() << "" << std::endl;

    meta->makeSound();
    x->makeSound();
    i->makeSound();  // will output the cat sound!
    j->makeSound();
    return 0;
}

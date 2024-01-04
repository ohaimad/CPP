/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 23:05:04 by otmane            #+#    #+#             */
/*   Updated: 2024/01/04 01:52:40 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

void leaks( void )
{
    system("leaks Animals");
};

int main()
{
    // atexit(leaks);
    const int arraySize = 4;
    Animal* animalArray[arraySize];

    for (int i = 0; i < arraySize; i++) {
        if (i % 2)
            animalArray[i] = new Dog();
        else
            animalArray[i] = new Cat();
    }
    std::cout << "-" << std::endl;
    for (int i = 0; i < arraySize; ++i) {
        delete animalArray[i];
    }
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 16:31:30 by ohaimad           #+#    #+#             */
/*   Updated: 2023/12/30 19:44:50 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#pragma once

class Brain {
    public:
        std::string ideas[100];
        Brain();
        ~Brain();
};

class Animal {
    protected:
        std::string type;
    
    public:
        Animal(const std::string& animalType);
        virtual ~Animal();
        virtual void makeSound() const;
        std::string getType() const;
};

class Dog : public Animal {
    private:
        Brain* brain;
    public:
        Dog();
        virtual ~Dog();
        virtual void makeSound() const;
};

class Cat : public Animal {
    private:
        Brain* brain;
    public:
        Cat();
        virtual ~Cat();
        virtual void makeSound() const;
};

// WrongCat class inheriting from WrongAnimal
class WrongAnimal {
    public:
        WrongAnimal();
        virtual ~WrongAnimal();
        // Member function to make sound (wrong version)
        virtual void makeSound() const;
};

class WrongCat : public WrongAnimal {
    public:
        WrongCat();
        virtual ~WrongCat();
};

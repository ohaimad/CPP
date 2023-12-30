/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 15:42:34 by ohaimad           #+#    #+#             */
/*   Updated: 2023/12/30 16:16:07 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#pragma once

class Animal {
protected:
    std::string type;

public:
    Animal();
    virtual ~Animal();
    virtual void makeSound() const;
    std::string getType() const;
};

class Dog : public Animal {
public:
    Dog();
    virtual ~Dog();
    virtual void makeSound() const;
};

class Cat : public Animal {
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
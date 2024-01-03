/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 15:42:34 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/03 19:08:15 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include<iostream>
#include<fstream>
#include<sstream>
#include<string>

class Dog : public Animal{
    protected :
        std::string type;
    public:
        Dog();
        ~Dog();
        Dog(const Dog& copy);
        Dog& operator=(const Dog& obj);
        void makeSound() const;
};

#endif
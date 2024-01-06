/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 15:42:34 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/06 16:34:35 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"
#include<iostream>
#include<fstream>
#include<sstream>
#include<string>

class Dog : public Animal{
    private:
        Brain  *dmagh;
    public:
        Dog();
        ~Dog();
        Dog(const Dog& copy);
        Dog& operator=(const Dog& obj);
        void makeSound() const;
};

#endif
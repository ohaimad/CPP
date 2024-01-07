/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 12:05:46 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/07 15:37:49 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include<iostream>
#include<fstream>
#include<sstream>
#include<string>

class WrongAnimal {
    protected : 
        std::string type;
    public:
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal(const WrongAnimal& copy);
        WrongAnimal& operator=(const WrongAnimal& obj);
        void makeSound() const;
};

#endif
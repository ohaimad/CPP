/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 15:42:34 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/04 00:10:53 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"
#include<iostream>
#include<fstream>
#include<sstream>
#include<string>

class Cat : public Animal{
    private:
        Brain  *dmagh;
    protected :
        std::string type;
    public:
        Cat();
        ~Cat();
        Cat(const Cat& copy);
        Cat& operator=(const Cat& obj);
        void makeSound() const;
};

#endif

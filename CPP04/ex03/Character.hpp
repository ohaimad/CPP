/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 19:02:24 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/06 13:12:21 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        AMateria *sl[4];
        std::string name;
    public:
        Character(std::string name);
        Character();
        ~Character();
        Character(const Character& copy);
        Character& operator=(const Character& obj);
        std::string const & getName() const;
        void equip(AMateria* m) ;
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif
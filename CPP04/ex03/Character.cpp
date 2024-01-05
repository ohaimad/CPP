/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 19:02:33 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/05 19:50:41 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
    for (int i = 0; i < 4; i++)
        sl[i] = NULL;
}

Character::~Character() {
}

Character::Character(const Character& copy) {
    *this = copy;
}

Character& Character::operator=(const Character& obj) {
    if (this != &obj) 
        *this = obj;
    return (*this);
}

std::string const & Character::getName() const
{
    return name;
}

void Character::equip(AMateria* m) 
{
    for(int i = 0; i < 4; i++)
    {
        if(sl[i] == NULL)
        {
            sl[i] = m;
            break; 
        }
    }
}

void Character::unequip(int idx)
{
    if(idx >= 0 && idx < 4)
        sl[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    
}

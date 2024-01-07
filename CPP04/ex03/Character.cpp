/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 19:02:33 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/07 14:18:19 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
    for (int i = 0; i < 4; i++)
        sl[i] = NULL;
}

Character::~Character() {
    for (int i = 0; i < 4; i++)
        delete sl[i];
}

Character::Character(const Character& copy) {
    *this = copy;
}

Character::Character(std::string name)
{
    this->name = name;
}

Character& Character::operator=(const Character& obj) {
    if (this != &obj) 
        *sl = *(obj.sl);
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
    if(idx >= 0 && idx < 4 && sl[idx])
        sl[idx]->use(target);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad <ohaimad@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:53:52 by ohaimad           #+#    #+#             */
/*   Updated: 2023/11/21 18:17:27 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str){ this->name = str;};

void    HumanB::setWeapon(Weapon &weaponType)
{
    weapon = new Weapon(weaponType);
}

void HumanB::attack()
{
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " is unarmed and cannot attack." << std::endl;
}

HumanB::~HumanB()
{
    delete weapon;
}

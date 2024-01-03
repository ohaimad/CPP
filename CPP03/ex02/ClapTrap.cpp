/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 03:59:35 by ohaimad           #+#    #+#             */
/*   Updated: 2023/12/26 21:42:32 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {}
ClapTrap::ClapTrap(const ClapTrap &obj) {
    *this = obj;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj) {
    Name = obj.Name;
    HitPoints = obj.HitPoints;
    EnergyPoints = obj.EnergyPoints;
    AttackDamage = obj.AttackDamage;

    return *this;
}

ClapTrap::ClapTrap(const std::string &name)
{
    Name = name;
    HitPoints = 10;
    EnergyPoints = 10;
    AttackDamage = 10;
    std::cout << "----> ClapTrap " << Name << " created!" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << Name << " destroyed!" << std::endl;
}

// Member functions
void ClapTrap::attack(const std::string &target)
{
    if (HitPoints > 0 && EnergyPoints > 0)
    {
        std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
        EnergyPoints--;
    }
    else
        std::cout << "ClapTrap " << Name << " can't attack. No hit points or energy left." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (HitPoints > 0)
    {
        std::cout << "ClapTrap " << Name << " takes " << amount << " damage." << std::endl;
        if (amount >= HitPoints)
            HitPoints = 0;
        else
            HitPoints -= amount;
    }
    else
        std::cout << "ClapTrap " << Name << " can't take more damage. No hit points left." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (HitPoints > 0 && EnergyPoints > 0)
    {
        std::cout << "ClapTrap " << Name << " repairs itself and gains " << amount << " hit points." << std::endl;
        HitPoints += amount;
        EnergyPoints--;
    }
    else
        std::cout << "ClapTrap " << Name << " can't be repaired. No hit points or energy left." << std::endl;
}

// Getter functions
std::string ClapTrap::getName() const {
    return Name;
}

unsigned int ClapTrap::getHitPoints() const {
    return HitPoints;
}

unsigned int ClapTrap::getEnergyPoints() const {
    return EnergyPoints;
}

unsigned int ClapTrap::getAttackDamage() const {
    return AttackDamage;
}

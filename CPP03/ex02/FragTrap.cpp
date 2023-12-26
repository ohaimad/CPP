/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 23:04:33 by ohaimad           #+#    #+#             */
/*   Updated: 2023/12/26 21:38:24 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {}
FragTrap::FragTrap(const FragTrap &obj) {
    *this = obj;
}

FragTrap &FragTrap::operator=(const FragTrap &obj) {
    Name = obj.Name;
    HitPoints = obj.HitPoints;
    EnergyPoints = obj.EnergyPoints;
    AttackDamage = obj.AttackDamage;
    return *this;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;

    std::cout << "FragTrap " << getName() << " has been created!" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << getName() << " has been destroyed!" << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << getName() << " requests a high five from everyone!" << std::endl;
}

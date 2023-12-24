/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 22:49:29 by ohaimad           #+#    #+#             */
/*   Updated: 2023/12/24 23:00:34 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Constructor
ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
    // Initialize ScavTrap attributes (HitPoints is accessible because it's now protected in ClapTrap)
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;

    std::cout << "ScavTrap " << getName() << " has been created!" << std::endl;
}

// Destructor
ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << getName() << " has been destroyed!" << std::endl;
}

// Special capacity
void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << getName() << " is now in Gatekeeper mode." << std::endl;
}


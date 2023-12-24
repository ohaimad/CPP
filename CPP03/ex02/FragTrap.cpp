/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 23:04:33 by ohaimad           #+#    #+#             */
/*   Updated: 2023/12/24 23:07:57 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Constructor
FragTrap::FragTrap(const std::string& name)
    : ClapTrap(name) {
    // Initialize FragTrap attributes (HitPoints is accessible because it's now protected in ClapTrap)
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;

    std::cout << "FragTrap " << getName() << " has been created!" << std::endl;
}

// Destructor
FragTrap::~FragTrap() {
    std::cout << "FragTrap " << getName() << " has been destroyed!" << std::endl;
}

// Special capacity
void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << getName() << " requests a high five from everyone!" << std::endl;
}

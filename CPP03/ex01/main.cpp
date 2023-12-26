/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:16:22 by ohaimad           #+#    #+#             */
/*   Updated: 2023/12/26 19:19:59 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    
    ClapTrap claptrap("PLAYER-1");
    ScavTrap scavtrap("PLAYER-2");

    claptrap.attack("Enemy1");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);

    std::cout << "\nCurrent Status (ClapTrap):" << std::endl;
    std::cout << "Name: " << claptrap.getName() << std::endl;
    std::cout << "Hit Points: " << claptrap.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << claptrap.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << claptrap.getAttackDamage() << std::endl;

    scavtrap.guardGate();
    scavtrap.attack("Enemy2");
    scavtrap.takeDamage(15);
    scavtrap.beRepaired(10);

    std::cout << "\nCurrent Status (ScavTrap):" << std::endl;
    std::cout << "Name: " << scavtrap.getName() << std::endl;
    std::cout << "Hit Points: " << scavtrap.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << scavtrap.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << scavtrap.getAttackDamage() << std::endl;

    return 0;
}


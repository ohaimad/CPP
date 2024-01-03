/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:16:22 by ohaimad           #+#    #+#             */
/*   Updated: 2023/12/26 21:43:30 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() 
{
    ClapTrap claptrap("PALYER-1");
    ScavTrap scavtrap("PALYER-2");
    FragTrap fragtrap("PALYER-3");

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

    fragtrap.highFivesGuys();
    fragtrap.attack("Enemy3");
    fragtrap.takeDamage(20);
    fragtrap.beRepaired(15);

    std::cout << "\nCurrent Status (FragTrap):" << std::endl;
    std::cout << "Name: " << fragtrap.getName() << std::endl;
    std::cout << "Hit Points: " << fragtrap.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << fragtrap.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << fragtrap.getAttackDamage() << std::endl;

    return 0;

}
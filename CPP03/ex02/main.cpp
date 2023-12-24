/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:16:22 by ohaimad           #+#    #+#             */
/*   Updated: 2023/12/24 23:13:11 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() 
{
    // Create a ClapTrap instance
    ClapTrap claptrap("PALYER-1");

    // Create a ScavTrap instance
    ScavTrap scavtrap("PALYER-2");

    // Create a FragTrap instance
    FragTrap fragtrap("PALYER-3");

    // Test attack, takeDamage, and beRepaired for ClapTrap
    claptrap.attack("Enemy1");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);

    // Display current status for ClapTrap
    std::cout << "\nCurrent Status (ClapTrap):" << std::endl;
    std::cout << "Name: " << claptrap.getName() << std::endl;
    std::cout << "Hit Points: " << claptrap.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << claptrap.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << claptrap.getAttackDamage() << std::endl;

    // Test special capacity for ScavTrap
    scavtrap.guardGate();

    // Test attack, takeDamage, and beRepaired for ScavTrap
    scavtrap.attack("Enemy2");
    scavtrap.takeDamage(15);
    scavtrap.beRepaired(10);

    // Display current status for ScavTrap
    std::cout << "\nCurrent Status (ScavTrap):" << std::endl;
    std::cout << "Name: " << scavtrap.getName() << std::endl;
    std::cout << "Hit Points: " << scavtrap.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << scavtrap.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << scavtrap.getAttackDamage() << std::endl;

    // Test special capacity for FragTrap
    fragtrap.highFivesGuys();

    // Test attack, takeDamage, and beRepaired for FragTrap
    fragtrap.attack("Enemy3");
    fragtrap.takeDamage(20);
    fragtrap.beRepaired(15);

    // Display current status for FragTrap
    std::cout << "\nCurrent Status (FragTrap):" << std::endl;
    std::cout << "Name: " << fragtrap.getName() << std::endl;
    std::cout << "Hit Points: " << fragtrap.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << fragtrap.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << fragtrap.getAttackDamage() << std::endl;

return 0;

}
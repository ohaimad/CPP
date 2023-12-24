/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:16:22 by ohaimad           #+#    #+#             */
/*   Updated: 2023/12/24 02:42:19 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    // Create a ClapTrap instance
    ClapTrap claptrap("PLAYER1");

    // Test attack, takeDamage, and beRepaired
    claptrap.attack("Enemy1");
    claptrap.takeDamage(20);
    claptrap.beRepaired(1);

    // Display current status
    std::cout << "Current Status:" << std::endl;
    std::cout << "Name: " << claptrap.getName() << std::endl;
    std::cout << "Hit Points: " << claptrap.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << claptrap.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << claptrap.getAttackDamage() << std::endl;

    return 0;
}

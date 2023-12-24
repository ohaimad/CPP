/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 03:59:32 by ohaimad           #+#    #+#             */
/*   Updated: 2023/12/24 23:09:16 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#pragma once

class ClapTrap 
{
    private:
        std::string Name;
    
    protected:
        unsigned int HitPoints;
        unsigned int EnergyPoints;
        unsigned int AttackDamage;
    
    public:
    // Constructors and destructor
    ClapTrap(const std::string& name);
    virtual ~ClapTrap();

    // Member functions
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    // Getter functions
    std::string getName() const;
    unsigned int getHitPoints() const;
    unsigned int getEnergyPoints() const;
    unsigned int getAttackDamage() const;
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad <ohaimad@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:53:54 by ohaimad           #+#    #+#             */
/*   Updated: 2023/11/21 18:10:19 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include "Weapon.hpp"

class HumanB {
private:
    std::string name;
    Weapon *weapon;
public:
    HumanB(std::string str);
    void setWeapon(Weapon &weaponType);
    void attack();
    ~HumanB();
};

#endif
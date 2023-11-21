/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad <ohaimad@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:48:45 by ohaimad           #+#    #+#             */
/*   Updated: 2023/11/21 17:59:29 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include "Weapon.hpp"

class HumanA {
private:
    std::string name;
    Weapon &weapon;
public:
    HumanA(std::string str, Weapon &weapon);
    void attack();
};

#endif
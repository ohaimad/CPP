/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad <ohaimad@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:54:02 by ohaimad           #+#    #+#             */
/*   Updated: 2023/11/21 17:59:16 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>

class Weapon {
private:
    std::string type;
public:
    Weapon(const std::string &initialType);
    const std::string &getType();
    void setType(const std::string& newType);
};

#endif
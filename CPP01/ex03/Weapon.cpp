/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad <ohaimad@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:53:59 by ohaimad           #+#    #+#             */
/*   Updated: 2023/11/21 17:44:10 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void Weapon::setType(const std::string& newType)
{
    type = newType;
}
const std::string &Weapon::getType()
{
    return type;
}

Weapon::Weapon(const std::string &initialType)
{
    type = initialType;
}
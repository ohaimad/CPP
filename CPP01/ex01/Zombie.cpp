/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad <ohaimad@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:24:18 by ohaimad           #+#    #+#             */
/*   Updated: 2023/12/08 00:50:37 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}

Zombie::Zombie(std::string mm) 
{
    name = mm;
}

Zombie::Zombie(){}

 void   Zombie::setZombiename(std::string str)
 {
    name = str;
 }

 std::string Zombie::getZombiename()
 {
    return(name);
 }

 Zombie::~Zombie()
 {
    std::cout << "this destractor is dead " << name << std::endl;
 }
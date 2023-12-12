/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad <ohaimad@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:58:15 by ohaimad           #+#    #+#             */
/*   Updated: 2023/12/11 18:57:38 by ohaimad          ###   ########.fr       */
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

 Zombie::~Zombie()
 {
    std::cout << "this destractor is dead " << name << std::endl;
 }

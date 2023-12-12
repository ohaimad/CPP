/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad <ohaimad@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:08:53 by ohaimad           #+#    #+#             */
/*   Updated: 2023/12/11 18:57:59 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main()
{
    randomChump("stack");
    Zombie *n_zombie = newZombie("heap");
    n_zombie->announce();
    delete n_zombie;
}

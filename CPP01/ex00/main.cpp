/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad <ohaimad@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:08:53 by ohaimad           #+#    #+#             */
/*   Updated: 2023/11/19 16:56:37 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main()
{
    Zombie s("Foo");
    s.announce();
    Zombie *n_zombie = newZombie("NEW");
    n_zombie->announce();
    randomChump("RANDOM");
}

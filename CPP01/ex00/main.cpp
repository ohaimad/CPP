/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad <ohaimad@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:08:53 by ohaimad           #+#    #+#             */
/*   Updated: 2023/11/08 22:16:29 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main(int ac, char **av)
{
    (void)av;
    (void)ac;
    Zombie s("Foo");
    s.announce();
    Zombie *n_zombie = newZombie("NEW");
    n_zombie->announce();
    randomChump("RANDOM");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad <ohaimad@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:28:42 by ohaimad           #+#    #+#             */
/*   Updated: 2023/12/11 19:04:21 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie* zombieHorde( int N, std::string name)
{
    if(N <= 0)
        return NULL;
    Zombie j[N];
    Zombie *ptr = new Zombie[N];
    for(int i = 0; i < N; i++)
        ptr[i].setZombiename(name);
    return(ptr);
}

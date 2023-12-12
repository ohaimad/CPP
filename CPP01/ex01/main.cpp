/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad <ohaimad@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:24:15 by ohaimad           #+#    #+#             */
/*   Updated: 2023/12/11 19:03:28 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 5;
    Zombie *str = zombieHorde(N, "Zombie");
    for(int i = 0; i < N; i++)
        str[i].announce();
    delete[] str;
}

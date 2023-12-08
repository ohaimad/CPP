/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad <ohaimad@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:24:15 by ohaimad           #+#    #+#             */
/*   Updated: 2023/12/08 00:26:29 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 10;
    Zombie *str = zombieHorde(N, "Zombie");
    for(int i = 0; i < N; i++)
        str[i].announce();
    delete[] str;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad <ohaimad@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:24:21 by ohaimad           #+#    #+#             */
/*   Updated: 2023/12/08 00:50:43 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include<iostream>
#include<fstream>
#include<sstream>
#include<string>

class Zombie
{
    private:
        std::string name;
    public:
        int i;
        Zombie();
        void announce( void );
        Zombie(std::string mm);
        void    setZombiename(std::string str);
        std::string    getZombiename();
        ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif
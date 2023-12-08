/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad <ohaimad@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:56:40 by ohaimad           #+#    #+#             */
/*   Updated: 2023/12/08 00:12:00 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie(std::string mm);
        void announce( void );
        ~Zombie();
};
Zombie* newZombie(std::string name);
void randomChump(std::string name);

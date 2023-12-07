/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad <ohaimad@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 22:46:34 by ohaimad           #+#    #+#             */
/*   Updated: 2023/12/07 18:47:39 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void ) 
{
    std::cout << "[ DEBUG ]\n" << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}
void Harl::info( void ) 
{
    std::cout << "[ INFO ]\n" << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}
void Harl::warning( void ) 
{
    std::cout << "[ WARNING ]\n" << "think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error( void ) 
{
    std::cout << "[ ERROR ]\n" << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
    int index = -1;
    std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for(int a = 0; a < 4; a++)
    {
        if(str[a] == level)
            index = a;
    }
    void(Harl::*ptr[4])(void);
    switch (index)
    {
        std::cout<< index << std::endl;
        case 0:
            ptr[0] = &Harl::debug;
        case 1:  
            ptr[1] = &Harl::info;
        case 2: 
            ptr[2] = &Harl::warning;
        case 3: 
            ptr[3] = &Harl::error;
        default:
            break;
    }
    if(index == -1)
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << "\n";
        return;
    }
    while(index < 4) {
        (this->*ptr[index])();
        index++;
    }
}
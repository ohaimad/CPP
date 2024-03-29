/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad <ohaimad@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:17:05 by ohaimad           #+#    #+#             */
/*   Updated: 2023/12/10 17:57:52 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

void Harl::debug( void ) 
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << "\n";
}
void Harl::info( void ) 
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << "\n";
}
void Harl::warning( void ) 
{
    std::cout << "think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << "\n";
}
void Harl::error( void ) 
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << "\n";
}

void  Harl::complain(std::string level)
{
    std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*ptr[4])(void);
    ptr[0] = &Harl::debug;
    ptr[1] = &Harl::info;
    ptr[2] = &Harl::warning;
    ptr[3] = &Harl::error;
    for(int a = 0; a < 4; a++)
    {
        if (level == str[a])
        {
            (this->*ptr[a])();
            return ;
        }
    }
    exit(0);
}
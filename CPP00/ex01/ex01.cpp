/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad <ohaimad@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:04:39 by ohaimad           #+#    #+#             */
/*   Updated: 2023/11/03 15:56:33 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include<iostream>
#include<iomanip>
#include<fstream>
#include<sstream>
#include<string>

static int i;

int    ft_space(std::string str)
{
    for(int i = 0; ((str[i] >= 9 && str[i] <= 13) || str[i] == 32); i++)
        return(1);
    return(0);
}


int main(int ac, char **av)
{
    (void)av;
    if(ac != 1)
        return 0;
    PhoneBook Adding;
    std::string command;

    while(1)
    {
        std::cout << "add command: ";
        getline(std::cin, command);
        if(std::cin.eof())
                exit(0);
        if(command == "ADD")
        {
            if(std::cin.eof())
                exit(0);
            std::cout << "first name : ";
            getline(std::cin,command);
            if (std::cin.eof())
                exit(0);
            while(1)
            {
                if(command.empty())
                {
                    std::cout << "Empty string !! " << std::endl;
                    std::cout << "first name : ";
                    getline(std::cin,command);
                    if (std::cin.eof())
                    exit(0);
                }
                else if(ft_space(command))
                {
                    std::cout << "Empty string !! " << std::endl;
                    std::cout << "first name : ";
                    getline(std::cin,command);
                    if (std::cin.eof())
                    exit(0);
                }
                else if(command.length() > 0)
                    break;
            }
            Adding.contacts[i].setFirstName(command);
            std::cout << "last name : ";
            getline(std::cin, command);
            if(std::cin.eof())
                exit(0);
            while(1)
            {
                if(command.empty())
                {
                    std::cout << "Empty string !! " << std::endl;
                    std::cout << "Last name : ";
                    getline(std::cin,command);
                    if (std::cin.eof())
                    exit(0);
                }
                else if(ft_space(command))
                {
                    std::cout << "Empty string !! " << std::endl;
                    std::cout << "first name : ";
                    getline(std::cin,command);
                    if (std::cin.eof())
                    exit(0);
                }
                else if(command.length() > 0)
                    break;
            }
            Adding.contacts[i].setLastName(command);
            std::cout << "nickname : ";
            getline(std::cin, command);
            if(std::cin.eof())
                exit(0);
            while(1)
            {
                if(command.empty())
                {
                    std::cout << "Empty string !! " << std::endl;
                    std::cout << "nickname : ";
                    getline(std::cin,command);
                    if (std::cin.eof())
                    exit(0);
                }
                else if(ft_space(command))
                {
                    std::cout << "Empty string !! " << std::endl;
                    std::cout << "first name : ";
                    getline(std::cin,command);
                    if (std::cin.eof())
                    exit(0);
                }
                else if(command.length() > 0)
                    break;
            }
            Adding.contacts[i].setNicktName(command);
            std::cout << "phone number : ";
            getline(std::cin, command);
            if(std::cin.eof())
                exit(0);
            while(1)
            {
                if(command.empty())
                {
                    std::cout << "Empty string !! " << std::endl;
                    std::cout << "phone number : ";
                    getline(std::cin,command);
                    if (std::cin.eof())
                    exit(0);
                }
                else if(ft_space(command))
                {
                    std::cout << "Empty string !! " << std::endl;
                    std::cout << "first name : ";
                    getline(std::cin,command);
                    if (std::cin.eof())
                    exit(0);
                }
                else if(command.length() > 0)
                    break;
            }
            Adding.contacts[i].setphonenumber(command);
            std::cout << "darkest secret : ";
            getline(std::cin, command);
            if(std::cin.eof())
                exit(0);
            while(1)
            {
                if(command.empty())
                {
                    std::cout << "Empty string !! " << std::endl;
                    std::cout << "darkest secret : ";
                    getline(std::cin,command);
                    if (std::cin.eof())
                    exit(0);
                }
                else if(ft_space(command))
                {
                    std::cout << "Empty string !! " << std::endl;
                    std::cout << "first name : ";
                    getline(std::cin,command);
                    if (std::cin.eof())
                    exit(0);
                }
                else if(command.length() > 0)
                    break;
            }
            Adding.contacts[i].setdarkestsecret(command);
            if (i == 8)
                i = 0;
            i++;
        }
        else if (command == "SEARCH")
        {
            int index;
            int contact = 0;
            for (int a = 0; a < i; a++)
            {
                std::cout << "index : ";
                std::cout << a + 1 << " |";
                if(Adding.contacts[a].getFisrtName().length() > 10)
                {
                    std::string word = "";
                    for(int d = 0; d < 9; d++)
                        word += Adding.contacts[a].getFisrtName()[d];
                    word += '.';
                    std::cout << std::setw(10) << word << "|";
                }
                else
                    std::cout << std::setw(10) << Adding.contacts[a].getFisrtName() << "|";
    
                if(Adding.contacts[a].getLastName().length() > 10)
                {
                    std::string word = "";
                    for(int d = 0; d < 9; d++)
                        word += Adding.contacts[a].getLastName()[d];
                    word += '.';
                    std::cout << std::setw(10) << word << "|";
                }
                else
                    std::cout << std::setw(10) << Adding.contacts[a].getLastName() << "|";
    
                if(Adding.contacts[a].getNickName().length() > 10)
                {
                    std::string word = "";
                    for(int d = 0; d < 9; d++)
                        word += Adding.contacts[a].getNickName()[d];
                    word += '.';
                    std::cout << std::setw(10) << word << "|" << std::endl;
                }
                else
                    std::cout << std::setw(10) << Adding.contacts[a].getNickName() << "|" << std::endl;
                contact = a;
            }
            std::cout << "set your index contact : ";
            getline(std::cin, command);
            if(std::cin.eof())
                exit(0);
            std::stringstream ss(command);
            ss >> index;
            if(index > 0 && index <= contact)
            {
                std::cout << "first name : ";
                std::cout << Adding.contacts[index].getFisrtName() << std::endl;;
                std::cout << "last name : ";
                std::cout << Adding.contacts[index].getLastName() << std::endl;;
                std::cout << "nickname : ";
                std::cout << Adding.contacts[index].getNickName() << std::endl;;
                std::cout << "phone number : ";
                std::cout << Adding.contacts[index].getPhoneNumber() << std::endl;;
                std::cout << "darkest secret : ";
                std::cout << Adding.contacts[index].getDarkestSecret() << std::endl;
            }
            else
                std::cout << "wrong index" << std::endl;
        }
        else if(command == "EXIT")
            exit(0);
        else
            std::cout << "invalid string !" << std::endl;
            
    }
}

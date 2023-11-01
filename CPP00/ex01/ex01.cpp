/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad <ohaimad@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:04:39 by ohaimad           #+#    #+#             */
/*   Updated: 2023/11/01 19:56:00 by ohaimad          ###   ########.fr       */
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

int main(int ac, char **av)
{
    
    if(ac != 1)
        return 0;
    (void)av;
    PhoneBook Adding;
    std::string command;

    while(1)
    {
        std::cout << "add command: ";
        command = "";
        getline(std::cin, command);
        if(std::cin.eof())
                exit(0);
        if(command == "ADD")
        {
            if(std::cin.eof())
                exit(0);
            std::cout << "first name : ";
            getline(std::cin,command);
            Adding.contacts[i].setFirstName(command);
            if (std::cin.eof())
                exit(0);
            std::cout << "last name : ";
            getline(std::cin, command);
            Adding.contacts[i].setLastName(command);
            if(std::cin.eof())
                exit(0);
            std::cout << "nickname : ";
            getline(std::cin, command);
            Adding.contacts[i].setNicktName(command);
            if(std::cin.eof())
                exit(0);
            std::cout << "phone number : ";
            getline(std::cin, command);
            Adding.contacts[i].setphonenumber(command);
            if(std::cin.eof())
                exit(0);
            std::cout << "darkest secret : ";
            getline(std::cin, command);
            if(std::cin.eof())
                exit(0);
            Adding.contacts[i].setdarkestsecret(command);
            if (i == 8)
                i = 0;
            i++;
        }
        else if (command == "SEARCH")
        {
            int index;
            for (int a = 0; a < i; a++)
            {
                std::cout << "index : ";
                std::cout << a << "|";
                std::cout << std::setw(5) << Adding.contacts[a].getFisrtName() << "|";
                std::cout << std::setw(5) << Adding.contacts[a].getLastName() << "|";
                std::cout << std::setw(5) << Adding.contacts[a].getNickName() << "|" << std::endl;
            }
                std::cout << "set your index contact : ";
                getline(std::cin, command);
                if(std::cin.eof())
                    exit(0);
                std::stringstream ss(command);
                ss >> index;
                if(index >= 0 && index <= 7)
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
            
        }
    }
}

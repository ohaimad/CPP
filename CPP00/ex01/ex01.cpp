/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad <ohaimad@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:04:39 by ohaimad           #+#    #+#             */
/*   Updated: 2023/10/30 22:12:27 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include<iostream>
#include<fstream>
#include<sstream>
#include<string>

static int i;

int main()
{
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
            Adding.contacts[i].setdarkestsecret(command);
            if (i == 8)
                i = 0;
            i++;
        }
        else if (command == "SEARCH")
        {
            for (int a = 0; a < i; a++)
            {
                std::cout << Adding.contacts[a].getFisrtName() << std::endl;
                std::cout << Adding.contacts[a].getLastName() << std::endl;
                std::cout << Adding.contacts[a].getNickName() << std::endl;
                std::cout << Adding.contacts[a].getPhoneNumber() << std::endl;
                std::cout << Adding.contacts[a].getDarkestSecret() << std::endl;
            }   
        }
    }
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad <ohaimad@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:04:39 by ohaimad           #+#    #+#             */
/*   Updated: 2023/11/12 20:11:03 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include<iostream>
#include<iomanip>
#include<fstream>
#include<sstream>
#include<string>

int    ft_space(std::string str)
{
    for(int i = 0; ((str[i] >= 9 && str[i] <= 13) || str[i] == 32); i++)
        return(1);
    return(0);
}

std::string   ft_msg(std::string  command, std::string msg)
{
    while(1)
    {
        if(command.empty() || ft_space(command))
        {
            std::cout << "Empty string !! " << std::endl;
            std::cout << msg;
            getline(std::cin,command);
            if (std::cin.eof())
                exit(0);
        }
        else if(command.length() > 0)
            break;
    }
    // std::cout << "|" <<command << "|" << std::endl;
    return (command);
}

void     cmds(std::string command, PhoneBook Adding)
{
    int p = 0;
    while(1)
    {
        if (p == 7)
            p = 0;
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
            command = ft_msg(command, "first name : ");
            Adding.contacts[p].setFirstName(command);
            std::cout << "last name : ";
            getline(std::cin, command);
            if(std::cin.eof())
                exit(0);
            command = ft_msg(command, "last name : ");
            Adding.contacts[p].setLastName(command);
            std::cout << "nickname : ";
            getline(std::cin, command);
            if(std::cin.eof())
                exit(0);
            command = ft_msg(command, "nickname : ");
            Adding.contacts[p].setNicktName(command);
            std::cout << "phone number : ";
            getline(std::cin, command);
            if(std::cin.eof())
                exit(0);
            command = ft_msg(command, "phone number : ");
            Adding.contacts[p].setphonenumber(command);
            std::cout << "darkest secret : ";
            getline(std::cin, command);
            if(std::cin.eof())
                exit(0);
            command = ft_msg(command, "darkest secret : ");
            Adding.contacts[p].setdarkestsecret(command);
            p++;
        }
        else if(command == "SEARCH")
        {
                int index;
                int contact = 0;

                if(Adding.contacts[0].getFisrtName() == "")
                {
                    std::cout << "use ADD first !" << std::endl;
                    continue;
                }
                for (int a = 0; a < 7; a++)
                {
                    if (Adding.contacts[a].getFisrtName() == "")
                        continue;
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
                contact++;
                std::cout << "set your index contact : ";
                getline(std::cin, command);
                if(std::cin.eof())
                    exit(0);
                std::stringstream ss(command);
                ss >> index;
                if((index > 0 && index <= contact) && !ft_space(command) && command.length() > 0)
                {
                    std::cout << "first name : ";
                    std::cout << Adding.contacts[index - 1].getFisrtName() << std::endl;;
                    std::cout << "last name : ";
                    std::cout << Adding.contacts[index - 1].getLastName() << std::endl;;
                    std::cout << "nickname : ";
                    std::cout << Adding.contacts[index - 1].getNickName() << std::endl;;
                    std::cout << "phone number : ";
                    std::cout << Adding.contacts[index - 1].getPhoneNumber() << std::endl;;
                    std::cout << "darkest secret : ";
                    std::cout << Adding.contacts[index - 1].getDarkestSecret() << std::endl;
                }
                else
                    std::cout << "wrong index" << std::endl;
        }
        else if (command == "EXIT")
            exit(0);
        else
            std::cout<< "type something valid!" <<std::endl;  
    }
}

int main(int ac, char **av)
{
    (void)av;
    if(ac != 1)
        return 0;
    PhoneBook Adding;
    std::string command;
    cmds(command, Adding);
}

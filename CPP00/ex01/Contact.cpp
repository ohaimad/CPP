/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad <ohaimad@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:03:41 by ohaimad           #+#    #+#             */
/*   Updated: 2023/11/01 19:33:53 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    Contact::setFirstName(std::string str)
{
    this->first_name = str;
}

void    Contact::setLastName(std::string str)
{
    this->last_name = str;
}

void    Contact::setNicktName(std::string str)
{
    this->nick_name = str;
}

void    Contact::setphonenumber(std::string str)
{
    this->phone_number = str;
}

void    Contact::setdarkestsecret(std::string str)
{
    this->darkest_secret = str;
}

// void    Contact::setindex(std::string str)
// {
//     this->set_index = str;
// }

std::string Contact::getFisrtName()
{
    return this->first_name;
}

std::string Contact::getLastName()
{
    return this->last_name;
}

std::string Contact::getNickName()
{
    return this->nick_name;
}

std::string Contact::getPhoneNumber()
{
    return this->phone_number;
}

std::string Contact::getDarkestSecret()
{
    return this->darkest_secret;
}

// std::string Contact::getindex()
// {
//     return this->darkest_secret;
// }
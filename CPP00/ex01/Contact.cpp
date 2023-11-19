/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad <ohaimad@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:03:41 by ohaimad           #+#    #+#             */
/*   Updated: 2023/11/12 19:59:55 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    Contact::setFirstName(std::string str)
{
    first_name = str;
}

void    Contact::setLastName(std::string str)
{
    last_name = str;
}

void    Contact::setNicktName(std::string str)
{
    nick_name = str;
}

void    Contact::setphonenumber(std::string str)
{
    phone_number = str;
}

void    Contact::setdarkestsecret(std::string str)
{
    darkest_secret = str;
}

std::string Contact::getFisrtName()
{
    return first_name;
}

std::string Contact::getLastName()
{
    return last_name;
}

std::string Contact::getNickName()
{
    return nick_name;
}

std::string Contact::getPhoneNumber()
{
    return phone_number;
}

std::string Contact::getDarkestSecret()
{
    return darkest_secret;
}

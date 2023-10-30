/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad <ohaimad@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:29:48 by ohaimad           #+#    #+#             */
/*   Updated: 2023/10/30 22:02:41 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HP
#define CONTACT_HP
#include<iostream>
#include<fstream>
#include<sstream>
#include<string>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string phone_number;
        std::string darkest_secret;
    public:
        void    setFirstName(std::string str);
        void    setLastName(std::string str);
        void    setNicktName(std::string str);
        void    setphonenumber(std::string str);
        void    setdarkestsecret(std::string str);
        std::string getFisrtName();
        std::string getLastName();
        std::string getNickName();
        std::string getPhoneNumber();
        std::string getDarkestSecret();
    
};

#endif
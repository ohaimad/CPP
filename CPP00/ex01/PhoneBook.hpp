/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad <ohaimad@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:28:22 by ohaimad           #+#    #+#             */
/*   Updated: 2023/11/12 19:50:24 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include "Contact.hpp"

class PhoneBook
{
public:
    Contact contacts[8];
};
#endif
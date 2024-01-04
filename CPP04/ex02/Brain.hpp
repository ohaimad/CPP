/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 23:26:15 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/04 01:44:40 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include<iostream>
#include<fstream>
#include<sstream>
#include<string>

class Brain{
    public:
        std::string ideas[1000];
        Brain();
        ~Brain();
        Brain(const Brain& copy);
        Brain& operator=(const Brain& obj);
};

#endif
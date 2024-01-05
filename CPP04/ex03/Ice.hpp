/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 21:02:51 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/05 19:11:22 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include "AMateria.hpp"

class Ice : public AMateria{
    public:
        Ice();
        ~Ice();
        Ice(const Ice& copy);
        Ice& operator=(const Ice& obj);
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif
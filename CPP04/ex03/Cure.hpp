/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 20:58:40 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/04 21:08:50 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include<iostream>
#include<fstream>
#include<sstream>
#include<string>

class Cure : public AMateria{
    public:
        Cure();
        ~Cure();
        Cure(const Cure& copy);
        Cure& operator=(const Cure& obj);
        AMateria* clone() const;
};

#endif
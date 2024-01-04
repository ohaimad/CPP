/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 19:33:38 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/04 21:41:01 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include<iostream>
#include<fstream>
#include<sstream>
#include<string>

class AMateria
{
    protected:
        std::string type;
    public:
    AMateria(std::string const & type);
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
    AMateria();
    ~AMateria();
    AMateria(const AMateria& copy);
    AMateria& operator=(const AMateria& obj);
};

#endif
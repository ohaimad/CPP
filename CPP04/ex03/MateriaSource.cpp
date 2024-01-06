/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 12:59:44 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/06 13:09:06 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++)
        sl[i] = NULL;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++)
        delete sl[i];
}

MateriaSource::MateriaSource(const MateriaSource& copy) {
    *this = copy;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& obj) {
    if (this != &obj) 
        *sl = *(obj.sl);
    return (*this);
}


void MateriaSource::learnMateria(AMateria* m)
{
     for(int i = 0; i < 4; i++)
    {
        if(sl[i] == NULL)
        {
            sl[i] = m;
            break; 
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
     for(int i = 0; i < 4; i++)
    {
        if(sl[i] &&  sl[i]->getType() == type)
        {
            return sl[i]->clone();
        }
    }
    return (0);
}

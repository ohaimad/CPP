#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include "IMateriaSource.hpp"


class MateriaSource : public IMateriaSource
{
    private:
        AMateria *sl[4];
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(const MateriaSource& copy);
        MateriaSource& operator=(const MateriaSource& obj);
        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);
};

#endif
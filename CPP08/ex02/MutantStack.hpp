/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 02:55:08 by ohaimad           #+#    #+#             */
/*   Updated: 2024/02/26 23:54:53 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>
#include <iostream>

template<typename T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
    MutantStack() {}
    MutantStack(const MutantStack& copy) { *this = copy;}
    MutantStack& operator=(const MutantStack& obj)
    {
        if (this == &obj)
            return *this;
        std::stack<T, std::deque<T> >::operator=(obj);
        return *this;
    }
    ~MutantStack() {}

    typedef typename Container::iterator iterator;
    iterator begin(){ return this->c.begin();}
    iterator end(){ return this->c.end();}
};

#endif 
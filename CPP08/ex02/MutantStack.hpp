/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 02:55:08 by ohaimad           #+#    #+#             */
/*   Updated: 2024/02/25 17:02:29 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>
#include <iostream>

template<typename T>
class MutantStack : public std::stack<T, std::deque<T> > {
public:
    typedef typename std::deque<T>::iterator iterator;
    typedef typename std::deque<T>::reverse_iterator reverse_iterator;

    iterator begin();
    iterator end();
    reverse_iterator rbegin();
    reverse_iterator rend();
};

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
    return typename MutantStack<T>::iterator(this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
    return typename MutantStack<T>::iterator(this->c.end());
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin() {
    return typename MutantStack<T>::reverse_iterator(this->c.rbegin());
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend() {
    return typename MutantStack<T>::reverse_iterator(this->c.rend());
}
#endif 
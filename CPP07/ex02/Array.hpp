/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 02:05:18 by ohaimad           #+#    #+#             */
/*   Updated: 2024/02/13 02:29:33 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>
#include <iostream>

template<typename T>
class Array {
    private:
        T* elements;
        size_t length;
    
    public:
        Array();
        explicit Array(size_t n);
        Array(const Array& other);
        Array& operator=(const Array& other);
        ~Array();
    
        T& operator[](size_t index);
        const T& operator[](size_t index) const;
        size_t size() const;
};

#include "Array.tpp"

#endif 
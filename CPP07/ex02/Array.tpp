/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 02:27:23 by ohaimad           #+#    #+#             */
/*   Updated: 2024/02/14 22:54:39 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array() : elements(NULL), length(0) {}

template<typename T>
Array<T>::Array(size_t n) : elements(new T[n]), length(n) {
    for (size_t i = 0; i < length; ++i) {
        elements[i] = T();
    }
}

template<typename T>
Array<T>::Array(const Array& other) : elements(new T[other.length]), length(other.length) {
    for (size_t i = 0; i < length; ++i) {
        elements[i] = other.elements[i];
    }
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& other) {
    if (this != &other) {
        delete[] elements;
        elements = new T[other.length];
        length = other.length;
        for (size_t i = 0; i < length; ++i) {
            elements[i] = other.elements[i];
        }
    }
    return *this;
}

template<typename T>
Array<T>::~Array() {
    delete[] elements;
}

template<typename T>
T& Array<T>::operator[](size_t index) {
    if (index > length) {
        throw std::out_of_range("Index out of range");
    }
    return elements[index];
}

template<typename T>
const T& Array<T>::operator[](size_t index) const {
    if (index > length) {
        throw std::out_of_range("Index out of range");
    }
    return elements[index];
}

template<typename T>
size_t Array<T>::size() const {
    return length;
}
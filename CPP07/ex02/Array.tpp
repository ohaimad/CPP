/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 02:27:23 by ohaimad           #+#    #+#             */
/*   Updated: 2024/02/13 02:31:01 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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
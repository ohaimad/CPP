/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 01:43:44 by ohaimad           #+#    #+#             */
/*   Updated: 2024/02/14 22:46:13 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T, typename Func>
void iter(T* array, size_t length, Func func) 
{
    for (size_t i = 0; i < length; ++i) {
        func(array[i]);
    }
}

template<typename T>
void fun(const T& element) {
    std::cout << element << " ";
}
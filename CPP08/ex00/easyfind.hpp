/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:22:45 by ohaimad           #+#    #+#             */
/*   Updated: 2024/02/20 12:03:07 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

template<typename T>
typename T::iterator easyfind(T& container, int value) {
    typename T::iterator it = container.begin();
    typename T::iterator end = container.end();

    for (; it != end; ++it) {
        if (*it == value) {
            return it;
        }
    }

    // If no occurrence is found, throw an exception or return an error value
    throw std::runtime_error("Value not found in container");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:22:45 by ohaimad           #+#    #+#             */
/*   Updated: 2024/02/26 13:16:51 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

template<typename T>
typename T::iterator easyfind(T& container, int value) 
{
    typename T::iterator nb = container.begin();
    typename T::iterator end = container.end();
    for (; nb != end; ++nb) 
    {
        if (*nb == value)
            return nb;
    }
    throw std::runtime_error("Value not found in container");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 23:42:05 by ohaimad           #+#    #+#             */
/*   Updated: 2024/02/13 01:45:03 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intArrayLength = sizeof(intArray) / sizeof(intArray[0]);

    char charArray[] = {'a', 'b', 'c', 'd', 'e'};
    size_t charArrayLength = sizeof(charArray) / sizeof(charArray[0]);

    std::cout << "Printing intArray: ";
    iter(intArray, intArrayLength, print<int>);
    std::cout << std::endl;

    std::cout << "Printing charArray: ";
    iter(charArray, charArrayLength, print<char>);
    std::cout << std::endl;

    // Using function object
    std::cout << "Printing intArray using function object: ";
    iter(intArray, intArrayLength, Print<int>());
    std::cout << std::endl;

    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 23:42:05 by ohaimad           #+#    #+#             */
/*   Updated: 2024/02/13 02:31:25 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() 
{
    try {
        // Construction with no parameter
        Array<int> emptyArray;
        std::cout << "Size of emptyArray: " << emptyArray.size() << std::endl;

        // Construction with size parameter
        Array<int> intArray(5);
        std::cout << "Size of intArray: " << intArray.size() << std::endl;

        // Accessing elements using subscript operator
        intArray[0] = 1;
        intArray[1] = 2;
        intArray[2] = 3;
        intArray[3] = 4;
        intArray[4] = 5;

        std::cout << "Elements of intArray: ";
        for (size_t i = 0; i < intArray.size(); ++i) {
            std::cout << intArray[i] << " ";
        }
        std::cout << std::endl;

        // Copy constructor and assignment operator
        Array<int> newArray(intArray);
        Array<int> assignedArray;
        assignedArray = intArray;

        std::cout << "Elements of newArray: ";
        for (size_t i = 0; i < newArray.size(); ++i) {
            std::cout << newArray[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "Elements of assignedArray: ";
        for (size_t i = 0; i < assignedArray.size(); ++i) {
            std::cout << assignedArray[i] << " ";
        }
        std::cout << std::endl;

        // Out of bounds index
        std::cout << "Trying to access an element with an out-of-bounds index..." << std::endl;
        std::cout << intArray[5] << std::endl; // Throws an exception
    } 
    catch (const std::out_of_range& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
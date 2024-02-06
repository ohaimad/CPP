/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 00:20:14 by ohaimad           #+#    #+#             */
/*   Updated: 2024/02/06 22:34:14 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Data.hpp"
#include "Serializer.hpp"

int main() 
{
    // Create a Data object
    Data data;
    data.value = 42;
    data.anotherValue = 3.14;

    // Serialize the pointer to the Data object
    uintptr_t serializedPtr = Serializer::serialize(&data);

    // Deserialize the serialized pointer
    Data* deserializedPtr = Serializer::deserialize(serializedPtr);

    // Check if the deserialized pointer is equal to the original pointer
    if (deserializedPtr == &data)
        std::cout << "Pointers match." << std::endl;
    else
        std::cout << "Pointers do not match." << std::endl;
    return 0;
}


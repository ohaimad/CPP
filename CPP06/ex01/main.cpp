/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 00:20:14 by ohaimad           #+#    #+#             */
/*   Updated: 2024/02/10 15:28:31 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Data.hpp"
#include "Serializer.hpp"

int main() 
{
    Data data;
    data.value = 42;
    data.anotherValue = 3.14;

    uintptr_t serializedPtr = Serializer::serialize(&data);
    Data* deserializedPtr = Serializer::deserialize(serializedPtr);

    std::cout << &data << std::endl;
    std::cout << deserializedPtr << std::endl;
    if (deserializedPtr == &data)
        std::cout << "Pointers match." << std::endl;
    return 0;
}


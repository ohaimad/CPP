/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 22:25:21 by ohaimad           #+#    #+#             */
/*   Updated: 2024/02/06 22:33:25 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <cstdint>
#include "Data.hpp"

class Serializer {
private:
    // Private constructor to prevent instantiation
    Serializer();

public:
    // Serialize method
    static uintptr_t serialize(Data* ptr);

    // Deserialize method
    static Data* deserialize(uintptr_t raw);
};

#endif // SERIALIZER_HPP


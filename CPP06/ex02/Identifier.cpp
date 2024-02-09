/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identifier.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 22:42:27 by ohaimad           #+#    #+#             */
/*   Updated: 2024/02/09 15:58:09 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identifier.hpp"

void Identifier::identify(Base* p) {
    if (dynamic_cast<A*>(p) != NULL)
        std::cout << "Object type: A" << std::endl;
    else if (dynamic_cast<B*>(p) != NULL)
        std::cout << "Object type: B" << std::endl;
    else if (dynamic_cast<C*>(p) != NULL)
        std::cout << "Object type: C" << std::endl;
    else
        std::cout << "Unknown object type" << std::endl;
}

void Identifier::identify(Base& p) {
    try {
        Base& a = dynamic_cast<A&>(p);
        std::cout << "Object type: A" << std::endl;
    } catch (...) {
        try {
            Base& b = dynamic_cast<B&>(p);
            std::cout << "Object type: B" << std::endl;
        } catch (...) {
            try {
                Base& c = dynamic_cast<C&>(p);
                std::cout << "Object type: C" << std::endl;
            } catch (...) {
                std::cout << "Unknown object type" << std::endl;
            }
        }
    }
}


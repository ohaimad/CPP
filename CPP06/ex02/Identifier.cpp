/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identifier.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 22:42:27 by ohaimad           #+#    #+#             */
/*   Updated: 2024/02/06 22:44:36 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identifier.hpp"

void Identifier::identify(Base* p) {
    if (dynamic_cast<A*>(p) != nullptr)
        std::cout << "Object type: A" << std::endl;
    else if (dynamic_cast<B*>(p) != nullptr)
        std::cout << "Object type: B" << std::endl;
    else if (dynamic_cast<C*>(p) != nullptr)
        std::cout << "Object type: C" << std::endl;
    else
        std::cout << "Unknown object type" << std::endl;
}

void Identifier::identify(Base& p) {
    Base* basePtr = &p;
    if (dynamic_cast<A*>(basePtr) != nullptr)
        std::cout << "Object type: A" << std::endl;
    else if (dynamic_cast<B*>(basePtr) != nullptr)
        std::cout << "Object type: B" << std::endl;
    else if (dynamic_cast<C*>(basePtr) != nullptr)
        std::cout << "Object type: C" << std::endl;
    else
        std::cout << "Unknown object type" << std::endl;
}


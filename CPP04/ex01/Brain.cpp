/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 23:26:43 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/07 16:29:53 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain const called" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain dist called" << std::endl;
}

Brain::Brain(const Brain& copy) {
    std::cout << " copy Constructer " << std::endl;
    *this = copy;
}

Brain& Brain::operator=(const Brain& obj) {
    if (this != &obj)
    {
        for (size_t i = 0; i < 100; i++)
            ideas[i] = obj.ideas[i];
    }
    return (*this);
}
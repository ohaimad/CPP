/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 23:26:43 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/06 16:28:30 by ohaimad          ###   ########.fr       */
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
    *this = copy;
}

Brain& Brain::operator=(const Brain& obj) {
    if (this != &obj)
        *ideas = *(obj.ideas);
    return (*this);
}
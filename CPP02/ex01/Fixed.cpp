/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:21:36 by ohaimad           #+#    #+#             */
/*   Updated: 2023/12/16 19:01:09 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fracts = 8;

Fixed::Fixed() : fixed(10) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &tmp) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &tmp) {
        fixed = tmp.fixed;
    }
    return *this;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    fixed = raw;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return fixed;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}
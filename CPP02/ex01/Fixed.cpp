/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:21:36 by ohaimad           #+#    #+#             */
/*   Updated: 2023/12/20 02:51:55 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fracts = 8;

Fixed::Fixed() : fixed(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &tmp) : fixed(tmp.fixed) {
    std::cout << "Copy constructor called" << std::endl;
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

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int value) : fixed(value << fracts) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : fixed(static_cast<int>(roundf(value * (1 << fracts)))) {
    std::cout << "Float constructor called" << std::endl;
}


float Fixed::toFloat() const {
    return static_cast<float>(fixed) / (1 << fracts);
}

int Fixed::toInt() const {
    return fixed >> fracts;
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj) {
    out << obj.toFloat();
    return out;
}

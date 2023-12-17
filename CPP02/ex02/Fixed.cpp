/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:21:36 by ohaimad           #+#    #+#             */
/*   Updated: 2023/12/17 04:02:19 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fracts = 8;

Fixed::Fixed() : fixed(0) {}
Fixed::Fixed(const Fixed &tmp) : fixed(tmp.fixed) {}
Fixed &Fixed::operator=(const Fixed &tmp) {
    if (this != &tmp) {
        fixed = tmp.fixed;
    }
    return *this;
}

void Fixed::setRawBits(int const raw) {
    fixed = raw;
}

int Fixed::getRawBits() const {
    return fixed;
}

Fixed::~Fixed() {}
Fixed::Fixed(const int value) : fixed(value << fracts) {}
Fixed::Fixed(const float value) : fixed(static_cast<int>(roundf(value * (1 << fracts)))) {}

float Fixed::toFloat() const {
    return static_cast<float>(fixed) / (1 << fracts);
}

int Fixed::toInt() const {
    return fixed >> fracts;
}

// Overload comparison operators
bool Fixed::operator>(const Fixed &other) const {
    return fixed > other.fixed;
}

bool Fixed::operator<(const Fixed &other) const {
    return fixed < other.fixed;
}

bool Fixed::operator>=(const Fixed &other) const {
    return fixed >= other.fixed;
}

bool Fixed::operator<=(const Fixed &other) const {
    return fixed <= other.fixed;
}

bool Fixed::operator==(const Fixed &other) const {
    return fixed == other.fixed;
}

bool Fixed::operator!=(const Fixed &other) const {
    return fixed != other.fixed;
}

// Overload arithmetic operators
Fixed Fixed::operator+(const Fixed &other) const {
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const {
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const {
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const {
    if (other.getRawBits() == 0) {
        std::cerr << "Error: Division by zero!" << std::endl;
        // You might want to handle this error differently depending on your use case
        return Fixed();
    }
    return Fixed(this->toFloat() / other.toFloat());
}

// Overload increment/decrement operators
Fixed &Fixed::operator++() {
    ++fixed;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    ++fixed;
    return tmp;
}

Fixed &Fixed::operator--() {
    --fixed;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    --fixed;
    return tmp;
}

// Static member functions
Fixed &Fixed::min(Fixed &a, Fixed &b) {
    if (a < b)
        return a;
    else
        return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
    if (a > b)
        return a;
    else
        return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    if (a < b)
        return a;
    else
        return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    if (a > b)
        return a;
    else
        return b;
}

// Overload of the insertion operator
std::ostream &operator<<(std::ostream &out, const Fixed &obj) {
    out << obj.toFloat();
    return out;
}

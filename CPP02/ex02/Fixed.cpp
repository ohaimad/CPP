/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:21:36 by ohaimad           #+#    #+#             */
/*   Updated: 2023/12/21 02:40:52 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fracts = 8;

Fixed::Fixed() : fixed(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &tmp) {
    std::cout << "Copy constructor called" << std::endl;
    *this = tmp;
}

Fixed &Fixed::operator=(const Fixed &right) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &right)
        this->fixed = right.getRawBits();
    return *this;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return fixed;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    fixed = raw;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int value) : fixed(value << fracts) {
    
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
    fixed = roundf(value * (1 << fracts));
    std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat() const {
    return ((float)(fixed) / (1 << fracts));
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
Fixed Fixed::operator+(const Fixed &other) const
{
    return Fixed(this->fixed + other.fixed);
}

Fixed Fixed::operator-(const Fixed &other) const
{
    return Fixed(this->fixed - other.fixed);
}

Fixed Fixed::operator*(const Fixed &other) const
{
    Fixed res;

    res.setRawBits((this->fixed * other.fixed) / (1 << fracts));
    return res;
}

Fixed Fixed::operator/(const Fixed &other) const
{
    Fixed res;

    res.setRawBits((this->fixed / (float)other.fixed) * (1 << fracts));
    return res;
}

// Overload increment/decrement operators
Fixed &Fixed::operator++() {
    ++fixed;
    return *this;
}

Fixed &Fixed::operator--() {
    --fixed;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    ++fixed;
    return tmp;
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

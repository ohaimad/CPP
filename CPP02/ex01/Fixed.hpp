/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:23:02 by ohaimad           #+#    #+#             */
/*   Updated: 2023/12/20 23:41:17 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<cmath>
#pragma once

class Fixed {
private:
    int fixed;
    static const int fracts;

public:
    Fixed();
    Fixed(const Fixed &tmp);
    Fixed &operator=(const Fixed &tmp);
    void setRawBits(int const raw);
    int getRawBits() const;
    Fixed(const int value);
    Fixed(const float value);               
    float toFloat() const;
    int toInt() const;
    ~Fixed();
};
std::ostream &operator<<(std::ostream &out, const Fixed &obj);

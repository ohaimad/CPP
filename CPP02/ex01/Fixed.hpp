/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:23:02 by ohaimad           #+#    #+#             */
/*   Updated: 2023/12/16 19:23:10 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<cmath>
#pragma once

class Fixed 
{
private:
    int fixed;
    static const int fracts;

public:
    Fixed();
    Fixed(const Fixed &tmp) : fixed(tmp.fixed) {}
    Fixed &operator=(const Fixed &tmp);
    ~Fixed();

    int getRawBits() const;
    void setRawBits(int const raw);
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 12:04:57 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/02 12:11:15 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
}

WrongCat::~WrongCat() {
}

WrongCat::WrongCat(const WrongCat& copy) {
    *this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat& obj) {
    if (this != &obj)
        *this = obj;
    return (*this);
}
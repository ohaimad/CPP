/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 00:20:14 by ohaimad           #+#    #+#             */
/*   Updated: 2024/02/06 22:43:45 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Generator.hpp"
#include "Identifier.hpp"

int main() {
    Base* obj = Generator::generate();
    Identifier::identify(obj);
    Identifier::identify(*obj);
    delete obj;
    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 00:20:14 by ohaimad           #+#    #+#             */
/*   Updated: 2024/02/10 15:45:06 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Generator.hpp"
#include "Identifier.hpp"

int main() 
{
    Base* test = Generator::generate();
    Identifier::identify(test);
    Identifier::identify(*test);
    delete test;
    return 0;
}

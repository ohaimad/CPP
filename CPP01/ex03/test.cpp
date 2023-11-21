/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad <ohaimad@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:53:36 by ohaimad           #+#    #+#             */
/*   Updated: 2023/11/21 17:51:13 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "HumanA.hpp"
// #include "HumanB.hpp"

# include <iostream>
void modify_int(int *i)
{
    (*i)++;
}

int main()
{
    int i = 4;
    int &d
    modify_int(&i);
    std::cout << i << std::endl;
}
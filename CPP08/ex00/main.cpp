/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:12:02 by ohaimad           #+#    #+#             */
/*   Updated: 2024/02/20 13:10:19 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    // Iterator declaration
    std::vector<int>::const_iterator it;
    // Iterator initialization
    it = vec.begin();
    while (it != vec.end()) 
    {
        std::cout << *it << " ";
        ++it; 
    }
    std::cout << std::endl;
    return 0;
}

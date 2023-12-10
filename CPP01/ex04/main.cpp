/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad <ohaimad@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:41:51 by ohaimad           #+#    #+#             */
/*   Updated: 2023/12/10 18:03:31 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main(int ac, char* av[]) 
{

    if (ac != 4) 
    {
        std::cerr << "Use: " << av[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    if(!av[2][0])
        return(0);
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    replaceInFile(filename, s1, s2);

    return 0;
}

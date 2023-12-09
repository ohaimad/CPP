/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad <ohaimad@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:41:51 by ohaimad           #+#    #+#             */
/*   Updated: 2023/12/09 22:56:42 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main(int argc, char* argv[]) 
{
    // Check if the correct number of command-line arguments is provided
    if (argc != 4) 
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1; // Indicates an error
    }
    if(!argv[2][0])
        return(0);
    // Get the command-line arguments
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    // Perform the replacement
    replaceInFile(filename, s1, s2);

    return 0; // Indicates success
}

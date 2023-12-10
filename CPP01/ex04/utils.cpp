/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad <ohaimad@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 21:33:04 by ohaimad           #+#    #+#             */
/*   Updated: 2023/12/10 18:02:52 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void replaceInFile(std::string &filename, std::string &s1, std::string &s2)
{
    std::ifstream inputFile(filename);
    if (!inputFile.is_open()) 
    {
        std::cerr << "Error opening file: " << filename << std::endl;
        return;
    }

    std::string outputFilename = filename + ".replace";
    std::ofstream outputFile(outputFilename);
    if (!outputFile.is_open())
    {
        std::cerr << "Error outputfile: " << outputFilename << std::endl;
        return;
    }

    std::string line;
    while (std::getline(inputFile, line))
    {
        size_t pos = 0;
        size_t s1Len = s1.length();
        size_t s2Len = s2.length();
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line = line.substr(0, pos) + s2 + line.substr(pos + s1Len);
            pos += s2Len;
        }
        if (!inputFile.eof())
            line += "\n";
        outputFile << line;
    }
    inputFile.close();
    outputFile.close();
    std::cout << "completed. Check the file: " << outputFilename << std::endl;
}

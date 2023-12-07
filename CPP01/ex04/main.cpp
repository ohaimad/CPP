/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad <ohaimad@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:41:51 by ohaimad           #+#    #+#             */
/*   Updated: 2023/11/21 23:40:42 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void replaceInFile(std::string& filename, std::string& s1, std::string& s2) 
{
    // Open the input file
    std::ifstream inputFile(filename);

    // Check if the input file is opened successfully
    if (!inputFile.is_open()) 
    {
        std::cerr << "Error opening file: " << filename << std::endl;
        return;
    }

    // Create a new output file with the ".replace" extension
    std::string outputFilename = filename + ".replace";
    std::ofstream outputFile(outputFilename);

    // Check if the output file is opened successfully
    if (!outputFile.is_open()) 
    {
        std::cerr << "Error creating output file: " << outputFilename << std::endl;
        return;
    }

    // Iterate through each line of the input file
    std::string line;
    while (std::getline(inputFile, line)) 
    {
        // Perform the replacement in the current line
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
            pos += s2.length();
        }
        // Write the modified line to the output file
        outputFile << line << std::endl;
    }

    // Close the input and output files
    inputFile.close();
    outputFile.close();

    std::cout << "Replacement completed. Check the file: " << outputFilename << std::endl;
}

int main(int argc, char* argv[]) 
{
    // Check if the correct number of command-line arguments is provided
    if (argc != 4) 
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1; // Indicates an error
    }

    // Get the command-line arguments
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    // Perform the replacement
    replaceInFile(filename, s1, s2);

    return 0; // Indicates success
}

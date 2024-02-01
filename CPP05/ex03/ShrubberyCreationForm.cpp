/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 22:02:57 by ohaimad           #+#    #+#             */
/*   Updated: 2024/02/01 14:19:14 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : AForm("Shrubbery Creation Form", 145, 137), target(target) {
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    AForm::execute(executor);
    
    std::string filename = target + "_shrubbery";
    std::ofstream outputFile(filename.c_str());

    if (outputFile.is_open()) {
        outputFile << "        *\n";
        outputFile << "       ***\n";
        outputFile << "      *****\n";
        outputFile << "     *******\n";
        outputFile << "    *********\n";
        outputFile << "   ***********\n";
        outputFile << "  *************\n";
        outputFile << " ***************\n";
        outputFile << "  *************\n";
        outputFile << " ***************\n";
        outputFile << "*****************\n";
        outputFile << "        |\n";
        outputFile.close();
    } else {
        std::cerr << "Failed to open file: " << filename << std::endl;
    }
}

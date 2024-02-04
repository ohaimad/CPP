/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 22:02:57 by ohaimad           #+#    #+#             */
/*   Updated: 2024/02/04 23:23:17 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation Form", 145, 137), target("default") {}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm(copy), target(copy.target) {}
ShrubberyCreationForm::~ShrubberyCreationForm() {}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj) {
    target = obj.target;
    return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : AForm("Shrubbery Creation Form", 145, 137), target(target) {
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    AForm::execute(executor);
    
    std::string filename = target + "_shrubbery";
    std::ofstream outputFile(filename);

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


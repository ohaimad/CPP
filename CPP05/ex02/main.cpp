/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 22:02:38 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/27 02:13:41 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        Bureaucrat bureaucrat("John Doe", 50);
        ShrubberyCreationForm shrubberyForm("Home");
        RobotomyRequestForm robotomyForm("Target");
        PresidentialPardonForm pardonForm("Criminal");

        std::cout << "Initial Bureaucrat: " << bureaucrat << std::endl;
        std::cout << "Initial Shrubbery Form: " << shrubberyForm << std::endl;
        std::cout << "Initial Robotomy Form: " << robotomyForm << std::endl;
        std::cout << "Initial Pardon Form: " << pardonForm << std::endl;

        bureaucrat.signForm(shrubberyForm);
        bureaucrat.signForm(robotomyForm);
        bureaucrat.signForm(pardonForm);

        bureaucrat.executeForm(shrubberyForm);
        bureaucrat.executeForm(robotomyForm);
        bureaucrat.executeForm(pardonForm);

        // Uncomment the line below to test GradeTooLowToExecuteException
        // Bureaucrat lowGradeBureaucrat("Low Grade", 100);

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}

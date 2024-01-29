/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 22:02:38 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/29 18:49:57 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
    try {
        Intern intern;
        Bureaucrat bureaucrat("John Doe", 5);
        // AForm* shrubberyForm = intern.makeForm("shrubbery creation", "Home");
        AForm* robotomyForm = intern.makeForm("robotomy request", "Target");
        AForm* pardonForm = intern.makeForm("presidential pardon", "Criminal");


        // bureaucrat.signForm(*shrubberyForm);
        bureaucrat.signForm(*robotomyForm);
        bureaucrat.signForm(*pardonForm);

        // bureaucrat.executeForm(*shrubberyForm);
        bureaucrat.executeForm(*robotomyForm);
        bureaucrat.executeForm(*pardonForm);

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}

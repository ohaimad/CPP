/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:22:07 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/29 22:03:01 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}
Intern::Intern(const Intern& copy) { *this = copy; }
Intern& Intern::operator=(const Intern& obj) {
    (void)obj;
    return *this;
}
Intern::~Intern() {}


AForm* Intern::makeForm(const std::string& formName, const std::string& target) {
    AForm* form = NULL;
    int i;
    std::string Names[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};

    for (i = 0; i < 3; i++) 
        if (formName == Names[i])
            break;
    switch (i) {
        case 0:
            std::cout << "Intern creates " << formName << std::endl;
            form = new RobotomyRequestForm(target);
            break;
        case 1:
            std::cout << "Intern creates " << formName << std::endl;
            form = new PresidentialPardonForm(target);
            break;
        case 2:
            std::cout << "Intern creates " << formName << std::endl;
            form = new ShrubberyCreationForm(target);
            break;
        default:
            std::cout << "Form name not found!" << std::endl;
            break;
    }
    return form;
}

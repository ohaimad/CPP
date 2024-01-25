/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 20:39:52 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/26 00:05:23 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat bureaucrat("John Doe", 50);
        Form form("Approval Form", 40, 30);

        std::cout << "Initial Bureaucrat: " << bureaucrat << std::endl;
        std::cout << "Initial Form: " << form << std::endl;

        bureaucrat.signForm(form);

        std::cout << "Form after Bureaucrat signing attempt: " << form << std::endl;

        bureaucrat.incrementGrade();
        std::cout << "Bureaucrat after incrementing grade: " << bureaucrat << std::endl;

        bureaucrat.signForm(form);

        std::cout << "Form after successful Bureaucrat signing: " << form << std::endl;

        // This will throw GradeTooLowException
        Form invalidForm("Invalid Form", 160, 170);

        // This will throw GradeTooLowException
        form.beSigned(bureaucrat);

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}

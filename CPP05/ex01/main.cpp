/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 22:02:02 by ohaimad           #+#    #+#             */
/*   Updated: 2024/02/04 20:30:48 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try {
        Bureaucrat bureaucrat("PAQUETA", 20);
        Form form("XXX", 2, 150);
        std::cout << "Initial Bureaucrat: " << bureaucrat << std::endl;
        std::cout << "Initial Form: " << form << std::endl;

        bureaucrat.signForm(form);
        std::cout << "Initial Form: " << form << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 22:02:43 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/28 17:10:20 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
    : AForm("Presidential Pardon Form", 25, 5), target(target) {}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    AForm::execute(executor);

    std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

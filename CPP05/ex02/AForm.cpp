/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 22:02:07 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/27 02:11:18 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

const char* AForm::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}

const char* AForm::FormNotSignedException::what() const throw() {
    return "Form is not signed!";
}

const char* AForm::GradeTooLowToExecuteException::what() const throw() {
    return "Grade is too low to execute the form!";
}

AForm::AForm(const std::string& name, int gradeToSign, int gradeToExecute)
    : name(name), signedStatus(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
    if (gradeToSign < 1 || gradeToSign > 150)
        throw GradeTooHighException();
    if (gradeToExecute < 1 || gradeToExecute > 150)
        throw GradeTooHighException();
}

AForm::~AForm() {
}

const std::string& AForm::getName() const {
    return name;
}

bool AForm::isSigned() const {
    return signedStatus;
}

int AForm::getGradeToSign() const {
    return gradeToSign;
}

int AForm::getGradeToExecute() const {
    return gradeToExecute;
}

void AForm::signForm(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() <= gradeToSign)
        signedStatus = true;
    else
        throw GradeTooLowException();
}

void AForm::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() >= gradeToSign)
        signedStatus = true;
    else
        throw GradeTooLowException();
}

void AForm::execute(Bureaucrat const & executor) const {
    if (!isSigned())
        throw FormNotSignedException();

    if (executor.getGrade() > gradeToExecute)
        throw GradeTooLowToExecuteException();
}

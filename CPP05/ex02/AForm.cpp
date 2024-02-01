/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 22:02:07 by ohaimad           #+#    #+#             */
/*   Updated: 2024/02/01 14:22:30 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("default"), signedStatus(false), gradeToSign(150), gradeToExecute(150) {}
AForm::AForm(const AForm& copy) : name(copy.name), signedStatus(copy.signedStatus), gradeToSign(copy.gradeToSign), gradeToExecute(copy.gradeToExecute) {}
AForm& AForm::operator=(const AForm& obj) {
    signedStatus = obj.signedStatus;
    return *this;
}

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



void AForm::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() <= gradeToSign)
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

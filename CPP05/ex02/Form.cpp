/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 22:02:27 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/27 15:53:39 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

const char* Form::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}

Form::Form(const std::string& name, int gradeToSign, int gradeToExecute)
    : name(name), signedStatus(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
    if (gradeToSign < 1 || gradeToSign > 150)
        throw GradeTooHighException();
    if (gradeToExecute < 1 || gradeToExecute > 150)
        throw GradeTooHighException();
}

const std::string& Form::getName() const {
    return name;
}

bool Form::isSigned() const {
    return signedStatus;
}

int Form::getGradeToSign() const {
    return gradeToSign;
}

int Form::getGradeToExecute() const {
    return gradeToExecute;
}

void Form::signForm(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() <= gradeToSign)
        signedStatus = true;
    else
        throw GradeTooLowException();
}

void Form::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() >= gradeToSign)
        signedStatus = true;
    else
        throw GradeTooLowException();
}

// std::ostream& operator<<(std::ostream& os, const Form& form) {
//     os << "Form: " << form.getName()
//        << ", Signed: " << (form.isSigned() ? "Yes" : "No")
//        << ", Grade to Sign: " << form.getGradeToSign()
//        << ", Grade to Execute: " << form.getGradeToExecute();
//     return os;
// }

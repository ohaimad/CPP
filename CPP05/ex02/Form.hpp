/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 22:02:32 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/27 15:51:23 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <string>

class Bureaucrat;

class Form {
private:
    const std::string name;
    bool signedStatus;
    const int gradeToSign;
    const int gradeToExecute;

public:
    class GradeTooHighException : public std::exception {
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
        virtual const char* what() const throw();
    };

    Form(const std::string& name, int gradeToSign, int gradeToExecute);

    const std::string& getName() const;

    bool isSigned() const;

    int getGradeToSign() const;

    int getGradeToExecute() const;

    void signForm(const Bureaucrat& bureaucrat);

    void beSigned(const Bureaucrat& bureaucrat);

};
// std::ostream& operator<<(std::ostream& os, const Form& form);

#endif



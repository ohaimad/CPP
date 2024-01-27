/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 22:02:10 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/27 16:26:53 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
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

    class FormNotSignedException : public std::exception {
        virtual const char* what() const throw();
    };

    class GradeTooLowToExecuteException : public std::exception {
        virtual const char* what() const throw();
    };

    AForm(const std::string& name, int gradeToSign, int gradeToExecute);

    virtual ~AForm();

    const std::string& getName() const;

    bool isSigned() const;

    int getGradeToSign() const;

    int getGradeToExecute() const;

    void signForm(const Bureaucrat& bureaucrat);

    void beSigned(const Bureaucrat& bureaucrat);

    virtual void execute(Bureaucrat const & executor) const = 0;

};
// std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif // AFORM_HPP

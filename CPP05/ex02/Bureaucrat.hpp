/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 22:02:21 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/27 15:00:55 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>

class AForm;

class Bureaucrat {
private:
    const std::string name;
    int grade;

public:
    class GradeTooHighException : public std::exception {
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
        virtual const char* what() const throw();
    };

    Bureaucrat(const std::string& name, int grade);

    const std::string& getName() const;

    int getGrade() const;

    void incrementGrade();

    void decrementGrade();

    void signForm(AForm& form);

    void executeForm(AForm const & form);

    friend std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);
};

#endif // BUREAUCRAT_HPP

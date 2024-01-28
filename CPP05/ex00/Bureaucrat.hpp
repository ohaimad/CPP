/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 22:01:22 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/28 17:08:56 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#pragma once

class Bureaucrat {
    private:
        const std::string name;
        int grade;

public:
    Bureaucrat();
    Bureaucrat(const Bureaucrat& copy);
    Bureaucrat& operator=(const Bureaucrat& obj);
    ~Bureaucrat();
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

};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

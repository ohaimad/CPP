/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 20:39:36 by ohaimad           #+#    #+#             */
/*   Updated: 2024/01/25 22:46:00 by ohaimad          ###   ########.fr       */
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

    friend std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);
};

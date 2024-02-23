/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:47:15 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/23 04:51:10 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>
// #include "AForm.hpp"

class AForm;
class Bureaucrat
{
private:
    std::string _name;
    short int _grade;

public:
    Bureaucrat();
    Bureaucrat(const Bureaucrat& obj);
    Bureaucrat& operator=(const Bureaucrat& obj);
    ~Bureaucrat();

    Bureaucrat(std::string name, short int grade);
    std::string getName() const;
    short int getGrade() const;
    void incrementGrade();
    void decrementGrade();
    void signForm(const AForm& obj) const;
    void executeForm(AForm const & form) const;
    class GradeTooHighException : public std::exception
    {
    public:
        const char * what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
    public:
        const char * what() const throw();
    };
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);
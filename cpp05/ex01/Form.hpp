/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 05:03:22 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/03/08 17:54:50 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
    const std::string _name;
    bool _signed;
    const short int _gradeRequiredToSign;
    const short int _gradeRequiredRoExecute;
public:
    
    Form();
    Form& operator=(const Form& obj);
    Form(const Form& obj);
    ~Form();

    Form(std::string name, short int gradeRequiredToSign, short int gradeRequiredRoExecute);
    std::string getName() const;
    short int getgradeRequiredToSign() const;
    short int getgradeRequiredRoExecute() const;
    bool isSigned() const;

    void beSigned(const Bureaucrat& obj);
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

std::ostream& operator<<(std::ostream& os, const Form& obj);
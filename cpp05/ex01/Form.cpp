/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 05:03:33 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/20 02:29:55 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
{
    this->_name = "";
    this->_gradeRequiredRoExecute = 1;
    this->_gradeRequiredToSign = 1;
    this->_signed = false;
}   
 
Form& Form::operator=(const Form& obj)
{
    if (this != &obj)
    {
        this->_name = obj._name;
        this->_gradeRequiredRoExecute = obj._gradeRequiredRoExecute;
        this->_gradeRequiredToSign = obj._gradeRequiredToSign;
        this->_signed = obj._signed;
    }
    return *this;
}   
 
Form::Form(const Form& obj)
{
    *this = obj;
}   
 
Form::~Form() {}   

/////////////////////////////////////////////////////////////////

Form::Form(std::string name, short int gradeRequiredToSign, short int gradeRequiredRoExecute)
{
    if (gradeRequiredToSign > 150 || gradeRequiredRoExecute > 150)
        throw GradeTooLowException();
    else if (gradeRequiredToSign < 1 || gradeRequiredRoExecute < 1)
        throw GradeTooHighException();
    else
    {
        this->_gradeRequiredRoExecute = gradeRequiredRoExecute;
        this->_gradeRequiredToSign = gradeRequiredToSign;
        this->_name = name;
    }
}

std::string Form::getName() const
{
    return this->_name;
}

short int Form::getgradeRequiredToSign() const
{
    return this->_gradeRequiredToSign;
}

short int Form::getgradeRequiredRoExecute() const
{
    return this->_gradeRequiredRoExecute;
}

void Form::beSigned(const Bureaucrat& obj)
{
    if (this->_gradeRequiredToSign < obj.getGrade())
    {
        obj.signForm(*this);
        throw GradeTooLowException();
    }
    else if (!this->_signed)
    {
        this->_signed = true;
        obj.signForm(*this);
    }
}


const char * Form::GradeTooHighException::what() const throw()
{
    return "Grade Too High !!";
}

const char * Form::GradeTooLowException::what() const throw()
{
    
    return "Grade Too Low !!";
}
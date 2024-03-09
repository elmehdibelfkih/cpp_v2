/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 05:03:33 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/03/09 21:02:16 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() :_name(""), _gradeRequiredToSign(1), _gradeRequiredRoExecute(1)
{
    this->_signed = false;
}   
 
Form& Form::operator=(const Form& obj)
{
    if (this != &obj)
        this->_signed = obj._signed;
    return *this;
}   

Form::Form(const Form& obj) :_name(obj._name), _gradeRequiredToSign(obj._gradeRequiredToSign) , _gradeRequiredRoExecute(obj._gradeRequiredRoExecute)
{
    this->_signed = obj._signed;
}
 
Form::~Form() {}   

/////////////////////////////////////////////////////////////////

Form::Form(std::string name, short int gradeRequiredToSign, short int gradeRequiredRoExecute) :_name(name), _gradeRequiredToSign(gradeRequiredToSign), _gradeRequiredRoExecute(gradeRequiredRoExecute)
{
    if (gradeRequiredToSign > 150 || gradeRequiredRoExecute > 150)
        throw GradeTooLowException();
    else if (gradeRequiredToSign < 1 || gradeRequiredRoExecute < 1)
        throw GradeTooHighException();
    else
        this->_signed = false;
    
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

bool Form::isSigned() const
{
    return this->_signed;
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

std::ostream& operator<<(std::ostream& os, const Form& obj)
{
    os << obj.getName() << " is ";
    if (obj.isSigned())
        os << "signed ";
    else
        os << "not signed ";
    os << "grade required to sign : " << obj.getgradeRequiredToSign() << " grade required to sign" << obj.getgradeRequiredToSign();
    return os;
}
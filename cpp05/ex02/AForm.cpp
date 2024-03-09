/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 05:03:33 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/03/09 22:13:08 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"


AForm::AForm() : _target(""), _gradeRequiredToSign(1), _gradeRequiredRoExecute(1)
{
    this->_signed = false;
}   
 
AForm& AForm::operator=(const AForm& obj)
{
    if (this != &obj)
        this->_signed = obj._signed;
    return *this;
}   
 
AForm::AForm(const AForm& obj) : _target(obj._target), _gradeRequiredToSign(obj._gradeRequiredToSign), _gradeRequiredRoExecute(obj._gradeRequiredRoExecute)
{
    *this = obj;
}   
 
AForm::~AForm() {}   

/////////////////////////////////////////////////////////////////


AForm::AForm(std::string Target, short int gradeRequiredToSign, short int gradeRequiredRoExecute) : _target(Target), _gradeRequiredToSign(gradeRequiredToSign), _gradeRequiredRoExecute(gradeRequiredRoExecute)
{
    if (gradeRequiredToSign > 150 || gradeRequiredRoExecute > 150)
        throw GradeTooLowException();
    else if (gradeRequiredToSign < 1 || gradeRequiredRoExecute < 1)
        throw GradeTooHighException();
    else
        this->_signed = false;
}

std::string AForm::getTarget() const
{
    return this->_target;
}

short int AForm::getgradeRequiredToSign() const
{
    return this->_gradeRequiredToSign;
}

short int AForm::getgradeRequiredRoExecute() const
{
    return this->_gradeRequiredRoExecute;
}

bool AForm::isSigned() const
{
    return this->_signed;
}

void AForm::beSigned(const Bureaucrat& obj)
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


const char * AForm::GradeTooHighException::what() const throw()
{
    return "Grade Too High !!";
}

const char * AForm::GradeTooLowException::what() const throw()
{
    return "Grade Too Low !!";
}

const char * AForm::NotSignedException::what() const throw()
{
    return "The form is not signed !!";
}

void AForm::setSigned(bool Msigned)
{
    this->_signed = Msigned;
}


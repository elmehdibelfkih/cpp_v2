/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 05:03:33 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/20 06:34:21 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm()
{
    this->_target = "";
    this->_gradeRequiredRoExecute = 1;
    this->_gradeRequiredToSign = 1;
    this->_signed = false;
}   
 
AForm& AForm::operator=(const AForm& obj)
{
    if (this != &obj)
    {
        this->_target = obj._target;
        this->_gradeRequiredRoExecute = obj._gradeRequiredRoExecute;
        this->_gradeRequiredToSign = obj._gradeRequiredToSign;
        this->_signed = obj._signed;
    }
    return *this;
}   
 
AForm::AForm(const AForm& obj)
{
    *this = obj;
}   
 
AForm::~AForm() {}   

/////////////////////////////////////////////////////////////////

AForm::AForm(std::string Target, short int gradeRequiredToSign, short int gradeRequiredRoExecute)
{
    if (gradeRequiredToSign > 150 || gradeRequiredRoExecute > 150)
        throw GradeTooLowException();
    else if (gradeRequiredToSign < 1 || gradeRequiredRoExecute < 1)
        throw GradeTooHighException();
    else
    {
        this->_gradeRequiredRoExecute = gradeRequiredRoExecute;
        this->_gradeRequiredToSign = gradeRequiredToSign;
        this->_target = Target;
    }
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
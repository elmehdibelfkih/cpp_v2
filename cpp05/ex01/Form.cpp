/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 05:03:33 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/17 06:00:33 by ebelfkih         ###   ########.fr       */
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
        this->_signed = false;
    }
    return *this;
}   
 
Form::Form(const Form& obj)
{
    *this = obj;
}   
 
Form::~Form() {}   


/////////////////////////////////////////////////////////////////
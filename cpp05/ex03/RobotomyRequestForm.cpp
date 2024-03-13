/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 05:51:17 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/03/11 19:51:24 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("", 72, 45), _target("")
{
    
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj) : AForm(obj), _target(obj._target)
{
    
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
    if (this != &obj)
        this->setSigned(obj.isSigned());
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

//////////////////////////////////////////////////////////////////////////////

RobotomyRequestForm::RobotomyRequestForm(std::string target)  : AForm(target, 72, 45), _target(target)
{
    
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    static int i;

    if (!this->isSigned())
        throw AForm::NotSignedException();
    else if (executor.getGrade() > this->getgradeRequiredRoExecute())
        throw AForm::GradeTooLowException();
    else
    {
        std::cout << "ta9 ta9 ta9 " << std::endl;
        if (i % 2)
            std::cout << this->_target << " has been robotomized successfully" << std::endl;
        else
            std::cout << "the robotomy failed" << std::endl;
    }
    i++;
}


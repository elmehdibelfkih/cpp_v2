/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm::.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 05:51:53 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/20 06:25:12 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("", 25, 5), _target("")
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) : AForm(obj), _target(obj._target)
{

}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
    if (this != &obj)
        this->setSigned(obj.isSigned());
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

//////////////////////////////////////////////////////////////////////////////////

PresidentialPardonForm::PresidentialPardonForm(std::string target)  : AForm("", 25, 5) , _target(target)
{

}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (!this->isSigned())
        throw AForm::NotSignedException();
    else if (executor.getGrade() > this->getgradeRequiredRoExecute())
        throw AForm::GradeTooLowException();
    else
        std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;

}

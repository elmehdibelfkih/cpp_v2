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

PresidentialPardonForm::PresidentialPardonForm() : AForm("", 145, 137)
{
    

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj)
{
    *this = obj;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
    
}

PresidentialPardonForm::~PresidentialPardonForm()
{


}

//////////////////////////////////////////////////////////////////////////////////

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 145, 137)
{


}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{


}

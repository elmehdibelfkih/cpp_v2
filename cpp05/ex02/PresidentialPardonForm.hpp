/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 05:52:02 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/20 06:22:05 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
{
public:
    PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm& obj);
    PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);
    ~PresidentialPardonForm();
    
    PresidentialPardonForm(std::string target);
    void execute(Bureaucrat const & executor) const;
};

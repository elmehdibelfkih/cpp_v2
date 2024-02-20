/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 05:51:05 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/20 06:23:35 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm
{
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm& obj);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);
    ~ShrubberyCreationForm();
    
    ShrubberyCreationForm(std::string target);
    void execute(Bureaucrat const & executor) const;
};

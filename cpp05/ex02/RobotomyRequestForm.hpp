/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 05:51:42 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/20 06:23:43 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm
{
public:
    RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm& obj);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);
    ~RobotomyRequestForm();
    
    RobotomyRequestForm(std::string target);
    void execute(Bureaucrat const & executor) const;
    
};
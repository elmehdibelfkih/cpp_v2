/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:47:13 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/23 06:04:18 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main (void)
{
    try
    {
        // AForm bac("bac", 1, 1);
        Bureaucrat ex("mehdi", 2);
        ShrubberyCreationForm jrida("nkhal");
        std::cout << ex.getName() << " : " << ex.getGrade() << std::endl;
        ex.executeForm(jrida);
        
        // ex.incrementGrade();
        // ex.decrementGrade();
        // std::cout << ex.getName() << " : " << ex.getGrade() << std::endl;
        // std::cout << ex;
        // bac.beSigned(ex);
    }
    catch (const std::exception& e)
    {
        std::cout << e.what();   
    }
    // catch (const Bureaucrat::GradeTooLowException& e)
    // {
    //     std::cout << e.what();
    // }
    // catch (const Bureaucrat::GradeTooHighException& e)
    // {
    //     std::cout << e.what();
    // }
    return 0;
}
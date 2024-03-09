/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:47:13 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/03/09 22:15:06 by ebelfkih         ###   ########.fr       */
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
        Bureaucrat ex("khalid", 72);
        Bureaucrat ex1("mehdi", 45);
        RobotomyRequestForm robot("maya");
        // std::cout << ex.getName() << " : " << ex.getGrade() << std::endl;
        // std::cout << ex << std::endl;
        robot.beSigned(ex);
        ex1.executeForm(robot);
        ex1.executeForm(robot);
        
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
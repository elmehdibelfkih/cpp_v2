/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:47:13 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/03/09 22:21:33 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main (void)
{
    try
    {
        Form bac("bac", 1, 1);
        Bureaucrat ex("mehdi", 2);
        // std::cout << ex.getName() << " : " << ex.getGrade() << std::endl;
        // ex.incrementGrade();
        // ex.decrementGrade();
        // std::cout << ex.getName() << " : " << ex.getGrade() << std::endl;
        std::cout << ex << std::endl;
        bac.beSigned(ex);
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
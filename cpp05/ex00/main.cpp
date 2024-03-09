/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:47:13 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/03/09 22:23:57 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void)
{
    try
    {
        Bureaucrat ex("mehdi", 1);
        std::cout << ex << std::endl;
        ex.decrementGrade();
        std::cout << ex << std::endl;
        ex.incrementGrade();
        std::cout << ex << std::endl;
        ex.incrementGrade();
        
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:47:18 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/15 18:13:55 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat()
{
    std::cout << "default constructor called" << std::endl;
    this->name = "";
    this->grade = 150;
    
}

Bureaucrat::Bureaucrat(std::string name, short int grade)
{
    std::cout << "default constructor called" << std::endl;
    this->name = name;
    try
    {
        if (grade > 150 || grade < 1)
            throw exception();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj)
{
    
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
    
}

Bureaucrat::~Bureaucrat()
{
    
}

std::string Bureaucrat::getName()
{
    
}

short int Bureaucrat::getGrade()
{
    
}

void Bureaucrat::incrementGrade()
{
    
}

void Bureaucrat::decrementGrade()
{
    
}

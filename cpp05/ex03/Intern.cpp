/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:50:25 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/03/13 21:48:37 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
    
}

Intern::Intern(const Intern &obj)
{
    (void)(obj);
}

Intern& Intern::operator=(const Intern &obj)
{
    (void)(obj);
        return *this;
}

Intern::~Intern()
{
    
}

/////////////////////////////////////////////////////////////////////////////////

AForm * Intern::makeForm(std::string name, std::string target)
{
    std::string request[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
    for (int i = 0; i < 3; i++)
    {
        if (name == request[i])
        {
            std::cout << "Intern creates " << name << std::endl;
            switch (i)
            {
            case 0:
                return new RobotomyRequestForm(target);
            case 1:
                return new ShrubberyCreationForm(target);
            case 2:
                return new PresidentialPardonForm(target);
            }
        }
    }
    std::cout << "error : " << name << std::endl;
    return NULL;
}

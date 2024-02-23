/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:47:18 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/23 05:00:04 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat()
{
    this->_name = "";
    this->_grade = 150;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj)
{
    *this = obj;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
    if (this != &obj)
    {
        this->_name = obj._name;
        this->_grade = obj._grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat(){}

//////////////////////////////////////////////////////////////////////////////

Bureaucrat::Bureaucrat(std::string name, short int grade)
{
    this->_name = name;
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    this->_grade = grade;
}

std::string Bureaucrat::getName() const
{
    return this->_name;
}

short int Bureaucrat::getGrade() const
{
    return this->_grade;
}

void Bureaucrat::incrementGrade()
{
    if (_grade == 1)
        throw GradeTooHighException();
    this->_grade--;
    return ;
}

void Bureaucrat::decrementGrade()
{

    if (_grade == 150)
        throw GradeTooLowException();
    this->_grade++;
    return ;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return os;
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade Too High !!";
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    
    return "Grade Too Low !!";
}

void Bureaucrat::signForm(const AForm& obj) const
{
    if (this->_grade > obj.getgradeRequiredToSign())
        std::cout << this->_name <<  " couldn\'t sign " << obj.getTarget() << "because grade too low " << std::endl;
    else
        std::cout << this->_name << " signed " << obj.getTarget() << std::endl;
}

void Bureaucrat::executeForm(AForm const & form) const
{
    try
    {
        form.execute(*this);
    }
    catch(const std::exception& e)
    {
        std::cout << this->getName() <<  " cant  execute this form" << std::endl;
        std::cerr << e.what() << '\n';
        return ;
    }
    std::cout << this->getName() << " executed " << form.getTarget() << std::endl;
}

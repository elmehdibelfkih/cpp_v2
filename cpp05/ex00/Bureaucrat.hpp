/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:47:15 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/18 04:53:04 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>

class Bureaucrat
{
private:
    std::string _name;
    short int _grade;

public:
    Bureaucrat();
    Bureaucrat(const Bureaucrat& obj);
    Bureaucrat& operator=(const Bureaucrat& obj);
    ~Bureaucrat();

    Bureaucrat(std::string name, short int grade);
    std::string getName() const;
    short int getGrade() const;
    void incrementGrade();
    void decrementGrade();
    class GradeTooHighException : public std::exception
    {
    public:
        const char * what() const _NOEXCEPT;
    };
    class GradeTooLowException : public std::exception
    {
    public:
        const char * what() const _NOEXCEPT;
    };
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 05:03:22 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/03/09 20:34:56 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
private:
    const std::string _target;
    bool _signed;
    const short int _gradeRequiredToSign;
    const short int _gradeRequiredRoExecute;
public:
AForm();
    AForm& operator=(const AForm& obj);
    AForm(const AForm& obj);
    ~AForm();

    AForm(std::string name, short int gradeRequiredToSign, short int gradeRequiredRoExecute);
    std::string getTarget() const;
    bool isSigned() const;
    short int getgradeRequiredToSign() const;
    short int getgradeRequiredRoExecute() const;

    void setSigned(bool Msigned);

    void beSigned(const Bureaucrat& obj);
    virtual void execute(Bureaucrat const & executor) const = 0;

    class GradeTooHighException : public std::exception
    {
    public:
        const char * what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
    public:
        const char * what() const throw();
    };
    class NotSignedException : public std::exception
    {
    public:
        const char * what() const throw();
    };
    
};

        
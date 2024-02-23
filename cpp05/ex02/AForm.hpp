/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 05:03:22 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/23 06:00:58 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
private:
    std::string _target;
    bool _signed;
    short int _gradeRequiredToSign;
    short int _gradeRequiredRoExecute;
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

    void setTarget(std::string target);
    void setSigned(bool Msigned);
    void setGradeRequiredToSign(short int gradeRequiredToSign);
    void setGradeRequiredRoExecute(short int gradeRequiredRoExecute);

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

        
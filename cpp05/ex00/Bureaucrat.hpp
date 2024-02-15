/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:47:15 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/15 18:09:15 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>

class Bureaucrat
{
private:
    std::string name;
    short int grade;

public:
    Bureaucrat();
    Bureaucrat(std::string name, short int grade);
    Bureaucrat(const Bureaucrat& obj);
    Bureaucrat& operator=(const Bureaucrat& obj);
    ~Bureaucrat();
    std::string getName();
    short int getGrade();
    void incrementGrade();
    void decrementGrade();
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 05:03:22 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/17 05:58:59 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Form
{
private:
    std::string _name;
    bool _signed;
    short int _gradeRequiredToSign;
    short int _gradeRequiredRoExecute;
public:
    Form();
    Form& operator=(const Form& obj);
    Form(const Form& obj);
    ~Form();

    Form(std::string name, short int _gradeRequiredToSign, short int _gradeRequiredRoExecute);
    void getName() const;
    void getgradeRequiredToSign() const;
    void getgradeRequiredRoExecute() const;
    
};

        
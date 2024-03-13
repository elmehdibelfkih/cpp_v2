/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:49:36 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/03/13 21:21:06 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "AForm.hpp"

class Intern
{
public:
    Intern();
    Intern(const Intern &obj);
    Intern& operator=(const Intern &obj);
    ~Intern();

    AForm *makeForm(std::string name, std::string target);
};
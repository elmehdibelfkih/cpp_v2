/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 08:13:25 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/03/25 07:02:16 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstdlib>
#include <string>
#include <limits>
#include <iomanip>
#include <cstdio>
#include <cmath>

class ScalarConverter
{
private:
    ScalarConverter();
public:
    static void convert(const std::string& str); 
};

void printChar(const double nbr);
void printInt(const double nbr);
void printFloat(const double nbr);
void printDouble(const double nbr);
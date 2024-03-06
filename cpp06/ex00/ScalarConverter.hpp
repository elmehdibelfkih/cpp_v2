/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 08:13:25 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/03/03 14:33:52 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstdlib>
#include <string>
#include <limits>
#include <iomanip>
#include <cstdio>

class ScalarConverter
{
public:
    static void convert(const std::string& str); 
};

void print_impossible(double nbr, bool s);
void infNan(double nbr);
void printChar(const double nbr);
void printInt(const double nbr);
void printFloat(const double nbr);
void printDouble(const double nbr);
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 08:13:32 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/26 02:37:31 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void ScalarConverter::convert(const std::string& str) const
{
    `
}

std::string trim(const std::string& str, const std::string& trm)
{
    std::string ret;
    std::string::size_type start;
    std::string::size_type end;
    start =  str.find_first_not_of(trm.c_str());
    end =  str.find_first_not_of(trm.c_str());
    ret = str.substr(start, end - start + 1);
    return ret;
}

void printChar(const std::string& str)
{
    // std::cout << "char: ";
    // if (str.size() == 1 && str.find("0123456789", 0))
    //     std::cout
}

void printInt(const std::string& str)
{
    
}

void printFloat(const std::string& str)
{
    
}

double printDouble(const std::string& str)
{
    
}
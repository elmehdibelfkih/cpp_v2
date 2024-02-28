/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 08:13:32 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/28 00:53:01 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void ScalarConverter::convert(const std::string& str) const
{
    char  *end;
    double s = std::strtod(str.c_str(), &end);
    if (s == 0 && *end)
        print_impossible(str, true);
    else if (s != 0 && *end)
        print_impossible(str, false   );
    else if (s == 0 && !*end)
        std::cout << "char: Non displayable\nint: 0\nfloat: 0.0f\ndouble: 0.0"<<std::endl;
    
        
}

void print_impossible(std::string str, bool s)
{
    if (s && (!str.compare("-inff") || !str.compare("+inff") || !str.compare("nanf")
        || !str.compare("-inf") || !str.compare("-inf") || !str.compare("nan")))
            infNan(str);
    else
        std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible"<<std::endl;
}

void infNan(std::string str)
{
    if (str.c_str()[0] == '-')
        std::cout << "char: impossible\nint: impossible\nfloat: -inff\ndouble: -inf"<<std::endl;
    else if (str.c_str()[0] == '+')
        std::cout << "char: impossible\nint: impossible\nfloat: +inff\ndouble: +inf"<<std::endl;
    else if (str.c_str()[0] == 'n')
        std::cout << "char: impossible\nint: impossible\nfloat: nan\ndouble: nan"<<std::endl;
}

// std::string trim(const std::string& str, const std::string& trm)
// {
//     std::string ret;
//     std::string::size_type start;
//     std::string::size_type end;
//     start =  str.find_first_not_of(trm.c_str());
//     end =  str.find_first_not_of(trm.c_str());
//     ret = str.substr(start, end - start + 1);
//     return ret;
// }

void printChar(const std::string& str)
{
    
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
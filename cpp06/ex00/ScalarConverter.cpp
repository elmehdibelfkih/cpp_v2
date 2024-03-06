/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 08:13:32 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/03/03 14:36:05 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void ScalarConverter::convert(const std::string& str)
{
    char  *end;
    double s = std::strtod(str.c_str(), &end);
    
    std::cout << std::fixed << std::setprecision(1);
    if (s == 0 && str.length() == 1 && !('0' <= str.c_str()[0] && str.c_str()[0] <= '9'))
    {
        s = static_cast<double>(str.c_str()[0]);
        end[0] = 0;
    }
    if (s == 0 && *end)
    {
        // printf("hi\n");
        print_impossible(s, false);
    }
    else if (s != 0 && *end)
    {
        // printf("hi\n");
        print_impossible(s, false);
    }
    else if (s == 0 && !*end)
        std::cout << "char: Non displayable\nint: 0\nfloat: 0.0f\ndouble: 0.0"<<std::endl;
    else if (s != 0 && !*end)
    {
        printChar(s);
        printInt(s);
        printFloat(s);
        printDouble(s);
    }
    std::cout.unsetf(std::ios_base::floatfield);
    return ; 
}

void print_impossible(double nbr, bool s)
{
    if (s)
            infNan(nbr);
    else
        std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible"<<std::endl;
    return ;
}

void infNan(double nbr)
{
    if (nbr == -std::numeric_limits<double>::infinity())
    {
        std::cout << "char: impossible\nint: impossible\nfloat: -inff\ndouble: -inf"<<std::endl;
        
    }
    else if (nbr == -std::numeric_limits<double>::infinity())
    {
        std::cout << "char: impossible\nint: impossible\nfloat: +inff\ndouble: +inf"<<std::endl;
        
    }
    else if (nbr == -std::numeric_limits<double>::quiet_NaN())
    {
        std::cout << "char: impossible\nint: impossible\nfloat: nan\ndouble: nan"<<std::endl;
        
    }
    return ;
}

void printChar(const double nbr)
{
    if (0 <= nbr && nbr <= 127)
    {
        if (0 <= nbr && nbr <= 31)
            std::cout << "char : non displayable" << std::endl;
        else
            std::cout << "char : " << static_cast<char>(nbr) << std::endl;
    }
    else
        std::cout << "char : impossible" << std::endl;
    return ;
}

void printInt(const double nbr)
{
    if (std::numeric_limits<int>::min() <= nbr && nbr <= std::numeric_limits<int>::max())
    {
        std::cout << "int : " << static_cast<int>(nbr) << std::endl;
    }
    else
        std::cout << "int : impossible" << std::endl;
    return ;
}

void printFloat(const double nbr)
{
    if (std::numeric_limits<float>::min() <= nbr && nbr <= std::numeric_limits<float>::max())
    {
        std::cout << "float : " << static_cast<float>(nbr) << "f" <<std::endl;
    }
    else
        std::cout << "float : impossible" << std::endl;
    return ;
}

void printDouble(const double nbr)
{
    std::cout << "double : " << nbr << std::endl;
    return ;
}
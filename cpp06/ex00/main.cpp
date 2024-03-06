/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 11:45:26 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/03/03 11:50:16 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        return (std::cout << "bad argument" << std::endl, 1);
    ScalarConverter::convert(av[1]);
    return 0;
}

// int main(int ac, char **av) {
//     (void)ac; 
//     char  *end;
//     std::string str = av[1];
//     double s = std::strtod(str.c_str(), &end);
//     std::cout << "double is : "<< static_cast<double>(s) << "\nand the value of this pointer is |" << end << "|\n";
//     std::cout << std::fixed;
//     std::cout << "double is : "<< static_cast<double>(s) << "\nand the value of this pointer is |" << end << "|\n";
//     return 0;

// }
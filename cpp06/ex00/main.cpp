/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 11:45:26 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/03/24 04:36:24 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        return (std::cout << "bad argument" << std::endl, 1);
    
    ScalarConverter::convert(av[1]);
    
    // ScalarConverter tm;

    // tm.convert(av[1]);
    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 23:18:17 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/09/25 06:03:49 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        return std::cout << "Error: could not open file" << std::endl , 1;
    
    BitcoinExchange test("data.csv");
    test.output(av[1]);
    return 0;
}
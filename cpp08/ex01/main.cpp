/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 10:39:24 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/03/27 18:17:57 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


void lks(void)
{
    system("leaks Span");
}

int main(void)
{
    // atexit(lks);
    // Span test(-10000);
    // Span test2(5);
    

    // std::srand(time(0));

    // try
    // {
    //     for (size_t i = 0; i < 100000; i++)
    //     {
    //         test.addNumber(std::rand());
    //     }
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    
    // test2 = test;
    // test.shortestSpan();
//     test2.shortestSpan();
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}
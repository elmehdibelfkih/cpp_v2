/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 08:33:21 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/03/28 14:35:27 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    Array<int> m(5);
    try
    {
        std::cout << m[10] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    // Array<std::string> test(3);
    // Array<std::string> s(2);
    // try
    // {
    //     s[1] = "mehdi";
    //     std::cout << s.size() << std::endl;
    //     std::cout << s[1] << std::endl;
    //     s = test;
    //     std::cout << s.size() << std::endl;
    //     std::cout << s[1] << std::endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    m[4] = 1999;
    Array<int> m1(m);
    try
    {
        std::cout << "before the modification at the m[4] : " << m1[4] << std::endl;
        m[4] = 10;
        std::cout << "after the modification at the m[4] : " << m1[1] << std::endl;
        m1[4] = 2507;
        std::cout << "m[4] after the modification at the m1[4] : " << m[4] << std::endl;
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}
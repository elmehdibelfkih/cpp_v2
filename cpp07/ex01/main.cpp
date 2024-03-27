/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 07:57:16 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/03/27 09:43:53 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <cstdio>

int main (void)
{
    int i[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    char c[6] = "mehdi";
    std::string s[4] = {"mehdi", "belfkih", "1337", "42"};
    iter(i, 8, PrintVal<int>);
    iter(c, 5, PrintVal<char>);
    iter(s, 4, PrintVal<std::string>);
    try
    {
        iter(s, -40, PrintVal<std::string>);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}
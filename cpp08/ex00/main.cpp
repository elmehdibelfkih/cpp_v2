/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 09:13:22 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/03/28 15:00:46 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main (void)
{ 
    std::vector<int> vec;
    for (int i = 0; i < 12; i++)
        vec.push_back(i);
    try
    {
        std::cout << *easyfind(vec, 54)<< std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::list<int> lst;
    for (int i = 0; i < 19; i++)
    {
        if (i % 3)
            lst.push_back(i);
        else
            lst.push_front(i);
    }
    for(std::list<int>::iterator it = lst.begin(); it != lst.end(); it++)
    {
        std::cout << *it << std::endl;
    }
    try
    {
        std::list<int>::iterator it = easyfind(lst, 11);
        std::cout << "element finded : " << *it << " at the index : " 
            << std::distance(lst.begin(), easyfind(lst, 11)) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
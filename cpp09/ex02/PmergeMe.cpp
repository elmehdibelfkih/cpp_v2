/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 22:02:22 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/04/05 18:03:38 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void checkParam(char **av, std::vector<int> &vec)
{
    int i = 0;

    int tmp;
    char *end;

    while (av[++i])
    {
        if (std::strchr(av[i], ','))
            throw "Error: not a integer ";
        tmp = std::strtod(av[i], &end);
        // if (std::strcmp(end, "") || tmp < 0)
        //     throw "Error: not a digit ";
        vec.push_back(tmp);
    }
    return ;
}

void swap(int &a, int &b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

void FordJohnsonVector(char **av, std::vector<int> &vec)
{
   checkParam(av, vec);
   sort(vec);
//    for (std::vector<int>::iterator it = vec.begin(); it < vec.end(); it++)
//    {
//         std::cout << " " << *it ;
//    }
   
    
    

}

void ggh(std::vector<int> vec)
{
    for (std::vector<int>::iterator it = vec.begin(); it < vec.end(); it++)
   {
        std::cout << " " << *it ;
   }
    std::cout << std::endl;
   
}
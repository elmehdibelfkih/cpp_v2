/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 22:02:31 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/04/05 02:49:30 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <deque>
#include <string>

void checkParam(char **av, std::vector<int> &vec)
{
    int i = 0;

    int tmp;
    char *end;

    while (av[++i])
    {
        if (std::strchr(av[i], ','))
            throw std::invalid_argument("Error: not a integer ");
        tmp = std::strtod(av[i], &end);
        if (!std::strcmp(end, "") || tmp < 0)
            throw std::invalid_argument("Error: not a integer ");
        vec.push_back(tmp);
    }
    return ;
}

void sort(std::vector<int> &vec)
{
    
}

void FordJohnsonVector(char **av)
{
    std::vector<int> vec;

    checkParam(av, vec);
            
    

}
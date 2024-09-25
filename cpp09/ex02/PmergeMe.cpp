/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 22:02:22 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/09/25 09:23:03 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void swap(int &a, int &b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

void checkParam(char **av, std::vector<int> &vec)
{
    int i = 0;

    int tmp;
    char *end;

    while (av[++i])
    {
        if (std::strchr(av[i], '.'))
            throw std::logic_error("Error: not a integer ");
        tmp = std::strtod(av[i], &end);
        if (std::strcmp(end, "") || tmp < 0)
            throw std::logic_error("Error: invalid integer => it must be a positive integer");
        vec.push_back(tmp);
    }
}

void print_con(std::vector<int> &vec)
{
    for (std::vector<int>::iterator it = vec.begin(); it < vec.end(); it++)
        std::cout << " " << *it ;
}
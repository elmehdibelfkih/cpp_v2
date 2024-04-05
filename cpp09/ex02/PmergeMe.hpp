/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 22:02:31 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/04/05 22:55:08 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <deque>
#include <string>
#include <cstdlib>
#include <cstring>
#include <exception>
#include <iostream>
#include <vector>
#include <sys/time.h>

void swap(int &a, int &b);

template <typename T>
void checkParam(char **av, T& con)
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
            throw std::logic_error("Error: not a digit ");
        con.push_back(tmp);
    }
    return ;
}

template <typename T>
void print_con(T& con)
{
    short int i = 0;
    for (typename T::iterator it = con.begin(); it < con.end(); it++)
    {
        if (i++ == 5)
            break;
        std::cout << " " << *it ;
    }
    std::cout << " [ ... ]" << std::endl;
   
}

template <typename T>
void mainPendChain(T& mainC, T& pendC, bool check, int tmp)
{
    size_t i = mainC.size();
    while (i)
    {
        if (i % 2)
        {
            pendC.push_back(*(mainC.begin() + i));
            mainC.erase((mainC.begin() + i));
        }
        i--;
    }
    while (pendC.size())
    {
        typename
        T::iterator it = std::lower_bound(mainC.begin(), mainC.end(), pendC.back());
        mainC.insert(it, pendC.back());
        pendC.pop_back();
    }
    if (check)
    {
        typename
        T::iterator it = std::lower_bound(mainC.begin(), mainC.end(), tmp);
        mainC.insert(it, tmp);
    }
}

template <typename T>
void sort(T &a)
{
    typename
    T::iterator it;
    T tmp;
    int tmp1;
    bool check = false;

    if (a.size() % 2 != 0)
    {
        tmp1 = a.back();
        a.pop_back();
        check = true;
    }
    it = a.begin();
    while (it != a.end())
    {
        if (*it < *(it + 1))
            swap(*it, *(it + 1));
        it += 2;
    }
    it = a.begin();
    while (it + 1 != a.end() && it + 2 != a.end())
    {
        if (*it > *(it + 2))
        {
            swap(*it, *(it + 2));
            swap(*(it + 1), *(it + 3));
        }
        it += 2;
    }
    mainPendChain(a, tmp, check, tmp1);
}
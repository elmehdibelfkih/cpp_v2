/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 22:02:31 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/09/25 09:16:31 by ebelfkih         ###   ########.fr       */
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

void checkParam(char **av, std::vector<int> &vec);

void print_con(std::vector<int> &vec);


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
    typename T::iterator it;
    T tmp;
    int tmp1;
    bool check = false;
    if (a.size() == 1)
        return ;

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
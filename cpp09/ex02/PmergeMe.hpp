/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 22:02:31 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/04/05 18:24:11 by ebelfkih         ###   ########.fr       */
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

void checkParam(char **av, std::vector<int> &vec);
void FordJohnsonVector(char **av, std::vector<int> &vec);
void swap(int &a, int &b);
void ggh(std::vector<int> vec);


template <typename T>
void mainPendChain(T& mainC, T& pendC)
{
    typename
    T::iterator it;
    it = mainC.begin() + 1;
    while (it != mainC.end())
    {
        if (it + 1 == mainC.end())
            break;
        pendC.push_back(*it);
        it = mainC.erase(it);
        it += 1;
    }
    ggh(mainC);
    ggh(pendC);
}

template <typename T>
void sort(T &a)
{
    typename
    T::iterator it;
    T tmp;
    int tmp1;
    if (a.size() % 2 != 0)
    {
        tmp1 = a.back();
        a.pop_back();
        // check
    }
    it = a.begin();
    while ((it + 2) != a.end())
    {
        if (*it < *(it + 1))
            swap(*it, *(it + 1));
        it += 2;
    }
    it = a.begin();
    std::cout << "hana" << std::endl;
    while (it + 2 != a.end())
    {
        if (*it > *(it + 2))
        {
            swap(*it, *(it + 2));
            swap(*(it + 1), *(it + 3));
        }
        it += 2;
    }
    (void)tmp1;
    ggh(a);
    mainPendChain(a, tmp);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 05:59:23 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/03/27 09:44:16 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void PrintVal(T a)
{
    std::cout << a << std::endl;
}

template <typename T, typename FUNCTION>
void iter(T *a, int i, FUNCTION f)
{
    if (i < 0)
        throw std::out_of_range("the index is out of range !!");
    for (int j = 0; j < i; j++)
        f(a[j]);
}

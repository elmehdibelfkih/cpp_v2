/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 05:59:23 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/03/26 08:25:06 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void f(T a)
{
    std::cout << *a << std::endl;
}

template <typename T>
void iter(T a, int i, void (*f)(T))
{
    for (int j = 0; j < i; j++)
        f(a + j);
}

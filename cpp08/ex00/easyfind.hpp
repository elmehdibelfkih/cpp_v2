/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 04:57:41 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/03/27 09:18:00 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
typename T::iterator easyfind(T& a, int to_find)
{
    typename T::iterator it = a.begin();
    while (it != a.end())
    {
        if (*it == to_find)
            return it;
        it++;
    }
    throw std::runtime_error("this value is not found in this container !!");
}

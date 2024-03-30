/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 10:38:42 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/03/28 15:57:08 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>


class Span
{
private:
    size_t _MaxElement;
    std::vector<int> _vec;
public:
    Span();
    Span(const Span& obj);
    Span& operator=(const Span& obj);
    ~Span();
    
    Span(unsigned  int N);
    void addNumber(int i);
    size_t shortestSpan() const;
    size_t longestSpan() const;
    void ft_rang(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};

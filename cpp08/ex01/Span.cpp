/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 10:39:01 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/03/27 18:20:05 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    this->_MaxElement = 0;
}

Span::Span(const Span& obj) : _MaxElement(obj._MaxElement)
{
        this->_arr = obj._arr;
}

Span& Span::operator=(const Span& obj)
{
    if (this != &obj)
    {
        this->_MaxElement = obj._MaxElement;
        this->_arr = obj._arr;
    }
    return *this;
    
}

Span::~Span()
{
}

/**********************************************************************************/

Span::Span(unsigned int N) : _MaxElement(N)
{
     
}

void Span::addNumber(int i)
{
    if (this->_arr.size() == this->_MaxElement)
        throw std::out_of_range("the array is full !!");
    this->_arr.push_back(i);
}

size_t Span::shortestSpan() const
{
    std::vector<int> tmp;
    if (this->_arr.size() < 2)
        throw std::logic_error("cannot get the span !!");
    int i = std::numeric_limits<int>::max();
    tmp = this->_arr;
    for (std::vector<int>::iterator it = tmp.begin(); it < (tmp.end() ); it++)
    {
        if ((*(it + 1) - *it) < i)
            i = (*(it + 1) - *it);
    }
    return (i);
}

size_t Span::longestSpan() const
{
    std::vector<int> tmp;
    if (this->_arr.size() < 2)
        throw std::logic_error("cannot get the span !!");
    tmp = this->_arr;
    std::sort(tmp.begin(), tmp.end());
    return (( *tmp.rbegin())- (*tmp.begin())  );
}


void Span::ft_rang(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    for(std::vector<int>::iterator it = begin; it < end; it++)
        this->addNumber(*it);
}
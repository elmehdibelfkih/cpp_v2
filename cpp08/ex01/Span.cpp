/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 10:39:01 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/03/30 06:44:07 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    this->_MaxElement = 0;
}

Span::Span(const Span& obj) : _MaxElement(obj._MaxElement)
{
        this->_vec = obj._vec;
}

Span& Span::operator=(const Span& obj)
{
    if (this != &obj)
    {
        this->_MaxElement = obj._MaxElement;
        this->_vec = obj._vec;
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
    if (this->_vec.size() == this->_MaxElement)
        throw std::out_of_range("the array is full !!");
    this->_vec.push_back(i);
}

size_t Span::shortestSpan() const
{
    if (this->_vec.size() < 2)
        throw std::logic_error("cannot get the span !!");
    int ret;
    int i;
    std::vector<int> tmp;
    tmp = this->_vec;
    std::sort(tmp.begin(), tmp.end());
    ret = tmp[1] - tmp[0];
    for (std::vector<int>::iterator it = tmp.begin() + 1; it < (tmp.end() ); it++)
    {
        i = *it - *(it - 1);
        if (ret > i)
            ret = i;
    }
    return (ret);
}

size_t Span::longestSpan() const
{
    if (this->_vec.size() < 2)
        throw std::logic_error("cannot get the span !!");
    std::vector<int> tmp;
    tmp = this->_vec;
    std::sort(tmp.begin(), tmp.end());
    return (( *tmp.rbegin())- (*tmp.begin())  );
}

void Span::ft_rang(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    for(std::vector<int>::iterator it = begin; it < end; it++)
        this->addNumber(*it);
}
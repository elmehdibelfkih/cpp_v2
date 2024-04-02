/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 07:03:06 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/04/02 01:26:48 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <deque>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack(){}
    MutantStack& operator=(const MutantStack& obj)
    {
        if (this != &obj)
            this->c = obj.c;
        return *this;
    }
    MutantStack(const MutantStack& obj)
    {
        *this = obj;
    }
    ~MutantStack()
    {
        this->c.clear();
    }

    typedef typename std::deque<T>::iterator iterator;
    iterator begin()
    {
        return this->c.begin();
    }
    
    iterator end()
    {
        return this->c.end();
    }

};

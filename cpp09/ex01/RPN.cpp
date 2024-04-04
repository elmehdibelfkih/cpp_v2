/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 18:36:52 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/04/04 18:23:47 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int calculate(std::string numbers)
{
    int tmp;
    std::stack<int> _stk;

    
    for (std::string::iterator it = numbers.begin(); it < numbers.end(); it++)
    {
        if (std::isdigit(*it))
            _stk.push(*it - '0');
        else if (*it == '+' && _stk.size() >= 2)
        {
            tmp = _stk.top();
            _stk.pop();
            tmp =tmp + _stk.top();
            _stk.pop();
            _stk.push(tmp);
        }
        else if (*it == '-' && _stk.size() >= 2)
        {
            tmp = -_stk.top();
            _stk.pop();
            tmp = _stk.top() + tmp;
            _stk.pop();
            _stk.push(tmp);
        }
        else if (*it == '/' && _stk.size() >= 2)
        {
            tmp = _stk.top();
            _stk.pop();
            tmp = _stk.top() / tmp;
            _stk.pop();
            _stk.push(tmp);
        }
        else if (*it == '*' && _stk.size() >= 2)
        {
            tmp = _stk.top();
            _stk.pop();
            tmp = _stk.top() * tmp;
            _stk.pop();
            _stk.push(tmp);
        }
        else if (*it != ' ')
            throw std::logic_error("Error");
    }
    if (_stk.size() != 1)
        throw std::logic_error("Error");
    return _stk.top();
}


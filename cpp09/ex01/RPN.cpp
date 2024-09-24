/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 18:36:52 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/09/24 20:19:16 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

double calculate(std::string numbers)
{
    double tmp;
    std::stack<double> _stk;

    
    for (std::string::iterator it = numbers.begin(); it < numbers.end(); it++)
    {
        if (std::isdigit(*it))
        {
            _stk.push(*it - '0');
            if ((it + 1) != numbers.end() && std::isdigit(*(it + 1)))
                throw std::logic_error("Error");
        }
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
            if (tmp == 0)
                throw std::logic_error("Error");
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


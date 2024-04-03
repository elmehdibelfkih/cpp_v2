/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 18:36:52 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/04/03 21:58:46 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
      
}

RPN& RPN::operator=(const RPN& obj)
{
    if (this != &obj)
        this->_stk = obj._stk;
    return *this;
}

RPN::RPN(const RPN& obj)
{
    *this = obj;
}

RPN::~RPN()
{
}

int RPN::calculate(std::string numbers)
{
    int tmp;

    for (std::string::iterator it = numbers.begin(); it < numbers.end(); it++)
    {
        if (std::isdigit(*it))
            this->_stk.push(*it - '0');
        else if (*it == '+' && this->_stk.size() != 0)
        {
            tmp = this->_stk.top();
            this->_stk.pop();
            while (!this->_stk.empty())
            {
                tmp =tmp + this->_stk.top();
                this->_stk.pop();
            }
            this->_stk.push(tmp);
        }
        else if (*it == '-' && this->_stk.size() != 0)
        {
            tmp = -this->_stk.top();
            this->_stk.pop();
            while (!this->_stk.empty())
            {
                tmp = this->_stk.top() + tmp;
                this->_stk.pop();
            }
            this->_stk.push(tmp);
        }
        else if (*it == '/' && this->_stk.size() != 0)
        {
            tmp = this->_stk.top();
            this->_stk.pop();
            while (!this->_stk.empty())
            {
                tmp = this->_stk.top() / tmp;
                this->_stk.pop();
            }
            this->_stk.push(tmp);
        }
        else if (*it == '*' && this->_stk.size() != 0)
        {
            tmp = this->_stk.top();
            this->_stk.pop();
            while (!this->_stk.empty())
            {
                tmp = this->_stk.top() * tmp;
                this->_stk.pop();
            }
            this->_stk.push(tmp);
        }
        else if (*it != ' ')
            throw std::logic_error("Error");
    }
    return this->_stk.top();
}

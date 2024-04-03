/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 18:36:09 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/04/03 21:58:31 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stack>
#include <iostream>

class RPN
{
private:
    std::stack<int> _stk;
public:
    RPN();
    RPN& operator=(const RPN& obj);
    RPN(const RPN& obj);
    ~RPN();

    int calculate(std::string numbers);
};



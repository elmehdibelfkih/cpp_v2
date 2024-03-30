/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 07:03:06 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/03/30 10:37:50 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>


template <typename T>
class MutantStack
{
private:
    std::vector<T> _MutantStack;
public:
    MutantStack();
    MutantStack(MutantStack& obj);
    MutantStack& operator=(MutantStack& ret);
    ~MutantStack();

    void push();
    void pop();
    bool empty();
    size_t size();
    T& top();
};


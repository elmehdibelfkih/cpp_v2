/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 07:03:15 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/04/02 01:22:42 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    // std::cout << mstack.top() << std::endl;
    mstack.pop();
    // std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    MutantStack<int> s(mstack);
    MutantStack<int>::iterator it1 = s.begin();
    MutantStack<int>::iterator ite1 = s.end();
    std::cout << "----------------------------" << std::endl;
    mstack.pop();
    while (it1 != ite1)
    {
        std::cout << *it1 << std::endl;
        ++it1;
    }
    
    // std::stack<int> s(mstack);
    return 0;
}
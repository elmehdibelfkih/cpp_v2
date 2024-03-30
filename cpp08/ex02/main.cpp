/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 07:03:15 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/03/30 09:56:18 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <stack>
#include <vector>

int main(void)
{
    std::stack<std::string> mehdi;
    mehdi.push("1");
    mehdi.push("2");
    mehdi.push("3");
    mehdi.push("4");
    mehdi.push("5");
    mehdi.push("6");
    mehdi.push("7");
    mehdi.push("8");
    mehdi.top() = "mehdi";
    std::cout << "top : " << mehdi.top() << std::endl;
    
}
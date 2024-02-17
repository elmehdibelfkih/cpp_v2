/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:47:13 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/17 04:22:01 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void)
{
    Bureaucrat ex("mehdi", 222);
    
    std::cout << ex.getName() << " : " << ex.getGrade() << std::endl;
    ex.decrementGrade();
    std::cout << ex.getName() << " : " << ex.getGrade() << std::endl;
    std::cout << ex;
    
    return 0;
}
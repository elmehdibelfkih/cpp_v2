/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 03:02:55 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/03/26 03:30:49 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int main (void)
{
    Base *ptr = generate();
    identify(ptr);
    identify(*ptr);
    delete ptr;
    return 0;
}
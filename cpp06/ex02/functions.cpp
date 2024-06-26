/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 02:03:21 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/03/26 07:28:56 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

Base * generate(void)
{
    std::srand(std::time(0));
    
    switch (std::rand() % 3)
    {
    case 0:
        return new A();
    case 1:
        return new B();
    case 2:
        return new C();
    }
    return NULL;
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "type of the passed class is A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "type of the passed class is B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "type of the passed class is C" << std::endl;
    else
        std::cout << "error" << std::endl;
    return ;   
}

void identify(Base& p)
{
    try{
        A& test = dynamic_cast<A&>(p);    
        (void)test;
        std::cout << "type of the passed class is A" << std::endl;    
    }
    catch(std::bad_cast& e)
    {
        try{
            B& test = dynamic_cast<B&>(p);   
            (void)test;  
            std::cout << "type of the passed class is B" << std::endl;   
        }
        catch(std::bad_cast& e)
        {
             try{
                C& test = dynamic_cast<C&>(p);  
                (void)test;  
                std::cout << "type of the passed class is C" << std::endl;    
            }
            catch(std::bad_cast& e)
            {
                std::cout << "error" << std::endl;
            }
        }
    }
    return ;   
}
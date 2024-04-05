/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 22:02:54 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/04/05 22:56:37 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char**av)
{
    int i = 0;
    long seconds;
    long microseconds;
    long totalTimeInMicroseconds;
    std::vector<int> vec;
    std::deque<int> deq;
    struct timeval start, end;

    if (ac == 1)
        return std::cout << "Error" << std::endl, 1;

    try
    {
        std::cout << "Before: ";
        while (av[++i] && i <= 5)
            std::cout << av[i] << " ";
        if (i == 6)
            std::cout << "[ ... ]" ;
        std::cout << std::endl;
        gettimeofday(&start, NULL);
        checkParam(av, vec);
        sort(vec);
        gettimeofday(&end, NULL);
        std::cout << "After: ";
        print_con(vec);
        seconds = end.tv_sec - start.tv_sec;
        microseconds = end.tv_usec - start.tv_usec;
        totalTimeInMicroseconds = seconds * 1000000 + microseconds;
        std::cout << "Time to process a range of " << ac - 1 
            << " elements with std::vector : " << totalTimeInMicroseconds << " us." << std::endl;
        gettimeofday(&start, NULL);
        checkParam(av, deq);
        sort(deq);
        gettimeofday(&end, NULL);
        seconds = end.tv_sec - start.tv_sec;
        microseconds = end.tv_usec - start.tv_usec;
        totalTimeInMicroseconds = seconds * 1000000 + microseconds;
        std::cout << "Time to process a range of " << ac - 1
            << " elements with std::deque : " << totalTimeInMicroseconds << " us." << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}


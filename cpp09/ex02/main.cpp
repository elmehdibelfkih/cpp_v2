/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 22:02:54 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/09/25 09:18:16 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"



int main(int ac, char**av)
{
    // int i = 0;
    long seconds;
    long microseconds;
    long deqTotalTimeInMicroseconds;
    long vecTotalTimeInMicroseconds;
    std::vector<int> vec;
    std::deque<int> deq;
    struct timeval start, end;

    if (ac <= 1)
        return std::cout << "Error: usage ./PmergeMe [1 3 2 ...]" << std::endl, 1;
    try
    {
        std::vector<int> tmp;
        checkParam(av, tmp);
        deq = std::deque<int>(tmp.begin(), tmp.end());
        vec = std::vector<int>(tmp.begin(), tmp.end());
        // time to process a range of elements with std::vector
        gettimeofday(&start, NULL);
        sort(vec);
        gettimeofday(&end, NULL);
        seconds = end.tv_sec - start.tv_sec;
        microseconds = end.tv_usec - start.tv_usec;
        vecTotalTimeInMicroseconds = seconds * 1000000 + microseconds;


        // time to process a range of elements with std::deque
        gettimeofday(&start, NULL);
        sort(deq);
        gettimeofday(&end, NULL);
        seconds = end.tv_sec - start.tv_sec;
        microseconds = end.tv_usec - start.tv_usec;
        deqTotalTimeInMicroseconds = seconds * 1000000 + microseconds;

        // display the time taken to process the range of elements with std::vector and std::deque
        std::cout << "before: ";
        print_con(tmp);
        std::cout << std::endl;
        
        std::cout << "after: ";
        print_con(vec);
        std::cout << std::endl;
        
        std::cout << "Time to process a range of " << ac - 1 
            << " elements with std::vector : " << vecTotalTimeInMicroseconds << " us." << std::endl;

    
    
        std::cout << "Time to process a range of " << ac - 1
            << " elements with std::deque : " << deqTotalTimeInMicroseconds << " us." << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return 1;
    }
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 22:02:54 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/04/05 02:44:22 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// int main(int ac, char**av)
// {
    
// }

// #include <iostream>
// #include <ctime>

// // Function for which you want to calculate time
// void yourFunction() {
//     // Your function implementation here
//     // This is just a placeholder
//     for (int i = 0; i < 100000000; ++i) {
//         // Some computation
//     }
// }

// int main() {
//     clock_t start, end;
    
//     // Record the start time
//     start = clock();
    
//     // Call your function
//     yourFunction();
    
//     // Record the end time
//     end = clock();
    
//     // Calculate the time taken
//     double timeTaken = (double)(end - start) / CLOCKS_PER_SEC;
    
//     std::cout << "Time taken by yourFunction: " << timeTaken << " seconds." << std::endl;
    
//     return 0;
// }

#include <iostream>
#include <sys/time.h>

void yourFunction() {
    // Your function implementation here
    // This is just a placeholder
    for (int i = 0; i < 1000000; ++i) {
        // Some computation
    }
}

int main() {
    struct timeval start, end;
    
    // Record the start time
    gettimeofday(&start, NULL);
    
    // Call your function
    yourFunction();
    
    // Record the end time
    gettimeofday(&end, NULL);
    
    // Calculate the time taken
    long seconds = end.tv_sec - start.tv_sec;
    long microseconds = end.tv_usec - start.tv_usec;
    double timeTaken = seconds + microseconds / 1000000.0;
    
    std::cout << "Time taken by yourFunction: " << timeTaken * 1000000 << " microseconds." << std::endl;
    
    return 0;
}

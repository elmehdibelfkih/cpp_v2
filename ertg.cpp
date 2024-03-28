#include<iostream>
#include <vector>
#include <list>

#include <iostream>
#include <vector>
#include <algorithm> // for std::sort

int main() {
    // Create a vector of integers
    std::vector<int> vec;
    vec.push_back(5);
    vec.push_back(2);
    vec.push_back(9);
    vec.push_back(1);
    vec.push_back(6);
    // Sort the vector
    std::sort(vec.begin(), vec.end());

    // Print the sorted vector
    std::cout << "Sorted vector:";
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << " " << *it;
    }
    std::cout << std::endl;

    return 0;
}

#include <iostream>

int main(int ac, char **av) {
    (void)ac; 
    char  *end;
    std::string str = av[1];
    double s = std::strtod(str.c_str(), &end);
    std::cout << "double is : "<< static_cast<double>(s) << "\nand the value of this pointer is |" << end << "|\n";
    std::cout << std::fixed;
    std::cout << "double is : "<< static_cast<double>(s) << "\nand the value of this pointer is |" << end << "|\n";
    return 0;

}
/*
Author: Thomas Huang
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab 2B

    funcs.cpp has the function, funcs.h delcares the functions, and main.cpp uses the declared functions 
    to print the intervals between L and U
*/
#include "funcs.h"
#include <iostream>
int main(){
    int L; int U;
    std::cout << "Please enter L: " << std::endl;
    std::cin >> L;
    std::cout << "Please enter U: " << std::endl;
    std::cin >> U;
    print_interval(L,U);
    return 0;
}
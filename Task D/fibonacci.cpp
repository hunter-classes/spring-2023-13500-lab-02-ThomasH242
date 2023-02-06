/*
Author: Thomas Huang
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab 2D

This program uses array of ints t compute and print all the numbers from fib
*/
#include <iostream>
using namespace std;
int main(){
    int fib[60];
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 0;i < size(fib);i++){
        if(i >= 2){
            fib[i] = fib[i-1] + fib[i-2];
        }
        cout << fib[i] << endl;
    }
    return 0;
}
/*
Author: Thomas Huang
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab 2A

This program prints out the squared of the 0-100
*/

#include <iostream>
using namespace std;
int main(){

    int input; bool t = false;
    cout << "h";
    cin >> input;
    while(t == false){
        
        if(input < 100 && input > 0){
            cout << input*input << endl;
            t = true;
        }
        cout << "re enter";
        cin >> input;
    }
    return 0;
}

/*
Author: Thomas Huang
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab 2C

This program prints an array and inputs a value to a specific index
*/
#include <iostream>
using namespace std;
int main(){
    int mydata[10];
    for(int i =0; i <= 10; i++){
        mydata[i] = 1;
        cout << mydata[i] << " ";
    }
    int index; int val;

    do{
        cout << "index" << endl;
        cin >> index;
        cout << "val"<< endl;;
        cin >> val;
        mydata[index] = val;
        for(int j = 0; j <= 10; j++){
        cout << mydata[j] << " ";
        }
    }while(index < 10 && index > 0);
    return 0;
}
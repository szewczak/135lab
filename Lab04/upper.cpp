/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: Lab4E. Upper triangle
Write a program upper.cpp that prints the top-right half of a square, given the side length.

Example:
Input side length: 5

Shape:
*****
 ****
  ***
   **
    *
...*/

#include <iostream> //cout-cin
using namespace std;

/// functions
    void printline (int total,int n){
        //prints n * characters and then prints a line return character
            string s(total-n,' ');
            string t(n, '*');
            s = s+t;
            cout << s;
        cout << endl;
    }
/// main
    int main(){
    /// Variables
        int length;
    /// console input
        cout << " Input side length: ";
        cin >> length;
        cout << endl;
    /// print function call(s)
        for(int i = length; i > 0;i--){
            printline(length, i);
        }
    return 0;
    }
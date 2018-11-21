/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: Lab4D. Lower triangle
Write a program lower.cpp that prints the bottom-left half of a square, given the side length.

Example:
    Input side length: 6

    Shape:
    *
    **
    ***
    ****
    *****
    ******
...*/

#include <iostream> //cout-cin
using namespace std;

/// functions
    void printline (int n){
        //prints n * characters and then prints a line return character
            string s(n,'*');
            cout <<s;
        cout << endl;
    }
/// main
    int main(){
    /// Variables
        int length;
    /// console input
        cout << " Input side length: ";
        cin >> length;
        length++;
    /// print function call(s)
        for(int i = 0;i<length;i++){
            printline(i);
        }
    return 0;
    }
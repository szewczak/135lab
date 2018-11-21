/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: Lab4A Box

Write a program box.cpp that asks the user to input width and height and prints a solid rectangular box of the requested size using asterisks.
Also, print a line Shape: between user input and the printed shape (to separate input from output).

Example:
    Input width: 7
    Input height: 4

    Shape:
    *******
    *******
    *******
    *******
    Hint:
        First find how to print one row of stars (print the asterisk character width times followed by end-of-line).
        Then, once you know how to print one line of stars, repeat it height times (using a loop).


...*/

#include <iostream> //cout-cin
using namespace std;

/// functions
    void printline (int n, bool state){
        //prints n * characters and then prints a line return character
        for(int i=0; i < n; i++){
            if(i%2 == 0){
                if(state) cout << "*";
                else cout << " ";
            }
            else{
                if(state) cout << "*";
                else cout << " ";
            }
            state = !state;
        }
        cout << endl;
    }
/// main
    int main(){
    /// Variables
        int width;
        int height;
        bool state = true; // By address flipped each time a new line is printed
    /// console input
        cout << "width:\n";
        cin >> width;
        cout << "height:\n";
        cin >> height;
    /// print function call(s)
        for(int i = 0;i<height;i++){
            printline(width,state);
            state = !state;
        }

    return 0;
    }
/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: Lab4C Cross

Task C. Cross
Write a program cross.cpp that asks the user to input the shape size, and prints a diagonal cross of that dimension.

Example:
    Input size: 8

    Shape:
    *      *
     *    *
      *  *
       **
       **
      *  *
     *    *
    *      *
...*/

#include <iostream> //cout-cin
using namespace std;

/// functions
    void printline (int total, int i){
        string line(total+1, ' ');
        line[i] = '*';
        line[total - i] = '*';
        cout << line << endl;
    }
/// main
    int main(){
    /// Variables
        int size;
    /// console input
        cout << "Input size: \n";
        cin >> size;
    /// print function call(s)
        for(int i = 0;i<size;i++) printline(size-1, i);
    return 0;
    }
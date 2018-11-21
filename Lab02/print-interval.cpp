/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: Lab2A

Write a program print-interval.cpp that asks the user to input two integers L and U (representing the lower and upper limits of the interval), and print out all integers in the range L ≤ i < U separated by spaces. Notice that we include the lower limit, but exclude the upper limit.

Example
    $ ./print-interval
        Please enter L: -5
        Please enter U: 10

        -5 -4 -3 -2 -1 0 1 2 3 4 5 6 7 8 9
*/

#include <iostream>

using namespace std;

int main(){
    int userL = 0;
    int userU = 0;
    cout << "Please Enter L: " << endl;
    cin >> userL;
    cout << "Please Enter U: " << endl;
    cin >> userU;
    //Get range between U to L
    int rangeLU =(userU - userL);
   
    for (userL; userL < userU; userL++)
    {
        cout << userL << " ";
    }
    return 0;
}
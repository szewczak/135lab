/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: Lab2A

Write a program valid.cpp, which asks the user to input an integer in the range 0 < n < 100. If the number is out of range, the program should keep asking to re-enter until a valid number is input.

After a valid value is obtained, print this number n squared.

Example
    $ ./valid
    Please enter an integer: -10
    Please re-enter: 1200
    Please re-enter: 100
    Please re-enter: 7

    Number squared is 49
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int userinterger = 0;
    cout << "Please enter an integer: \n";
    cin >> userinterger;

    while (userinterger <= 0 || userinterger >= 100)
    {
        cout << "Please re-enter: \n";
        cin >> userinterger;
    }
    cout << "number squared is" << pow(userinterger, 2) << endl;
    return 0;
}
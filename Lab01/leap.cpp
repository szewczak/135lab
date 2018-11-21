/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: Lab 1C
############
In the modern Gregorian calendar, a year is a leap year if it is divisible by 4, but century years are not leap years unless they are divisible by 400. Here is the pseudocode:

if (year is not divisible by 4) then (it is a common year) 
else if (year is not divisible by 100) then (it is a leap year) 
else if (year is not divisible by 400) then (it is a common year) 
else (it is a leap year)
############
Write a program leap.cpp that asks the user to input an integer representing a year number (1999, 2016, etc.). If the input year is a leap year according to the modern Gregorian calendar, it should print Leap year, otherwise, print Common year.
$ ./leap
Enter year: 2016

Leap year
*/

#include <iostream>

using namespace std;

int main(){
    int useryear = 0;
    cout << "Enter year: \n";
    cin >> useryear;
    
    //if else logic
    if(useryear % 4 != 0){
        cout << "Common year\n";
    }
    else if(useryear % 100 != 0){
        cout << "Leap Year\n";
    }
    else if(useryear % 400 != 0){
        cout << "Common year\n";
    }
    else{
        cout << "Leap Year\n";
    }

    return 0;
}
// int checkLeapyear(year){
    
// }
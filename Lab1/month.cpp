/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: Lab1D

    ./month
    Enter year: 2017
    Enter month: 5

    31 days
*/

#include <iostream>

using namespace std;

bool leapcheck(int year)
/*if (year is not divisible by 4) then (it is a common year) 
else if (year is not divisible by 100) then (it is a leap year) 
else if (year is not divisible by 400) then (it is a common year) 
else (it is a leap year)*/
{   if (year % 4 != 0){
        return false;
    } else if (year % 100 != 0){
        return true;
    } else if (year % 400 != 0){
        return false;
    } else {
       return true;
    }
}

int daysinmonth (int month, bool leap)
{
    if (month ==1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        return 31;
    } else if (month == 2){
        if (leap){
            return 29;
        } else{
            return 28;
        }
    } else{
        return 30;
    }
}

int main()
{
    int useryear = 0;
    int usermonth = 0;
    cout << "Enter Year:\n";
    cin >> useryear;
    cout << "Enter month:\n";
    cin >> usermonth;

    cout << daysinmonth(usermonth, leapcheck(useryear)) << " days\n";
    return 0;
}


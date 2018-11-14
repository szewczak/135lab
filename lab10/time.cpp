/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: LAB 10 A. Simple functions for time
Create a new program time.cpp. (Copy the class Time declaration in your
program, it should be placed before main() function.)

Implement two new functions:

    int minutesSinceMidnight(Time time);
    int minutesUntil(Time earlier, Time later);
The first function should return the number of minutes from 0:00AM until time.

The second function should receive two Time arguments earlier and later and
report how many minutes separate the two moments. For example, when passing
10:30AM and 1:40PM:

    minutesUntil( {10, 30}, {13, 40} )  
// ==> should return 190 minutes
(A caveat: If the earlier moment of time happens to be after the later moment
of time, report a negative number of minutes. Although it’s not difficult to
achieve this if your implementation for the first function is correct.)

For testing purposes, implement a simple user interface:

    $ ./time
    Enter first time:  10 30
    Enter second time: 13 40

These moments of time are X and Y minutes after midnight.
The interval between them is Z minutes.
*/

#include <iostream>

using namespace std;

class Time { 
public:
    int h;
    int m;
};

int minutesSinceMidnight(Time time){
    return time.h*60 + time.m;
}
int minutesUntil(Time earlier, Time later){
    int start = earlier.h*60+earlier.m;
    int end = later.h*60+later.m;
    // if(end>start){
    //     return end-start;
    // }
    // else{
    //     return 1440-start+end;
    // }
    // return (end - start);
    return end-start;
}


int main(){
    
    return 0;
}
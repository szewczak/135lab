/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: LAB 10 Task B. Making it more interesting
Add a new function to your program time.cpp:

Time addMinutes(Time time0, int min);
The function should create and return a new moment of time that is min minutes after time0. Example:

addMinutes({8, 10}, 75)
// ==> should return {9, 25}
(We will not test how your function behaves if the new returned time will be on the next day, feel free to assume that it will remain withing the same day, ≤ 23:59.)

Adjust the main function for testing this function. Feel free to add additional tests to check the correctness of your code.
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

Time addMinutes(Time time0, int min){
    int totalmins = 60*time0.h + time0.m + min;
    time0.h = totalmins/60;
    time0.m = totalmins%60;
    return time0; 
}

int main(){
    
    return 0;
}
/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: Lab10

Here, briefly, at least in one or a few sentences
describe what the program does.
*/

#include <iostream>

using namespace std;


/*
Let’s define a datatype (class) for storing time HH:MM
We want to create this new class/datatype for representing time in the
24-hour format. It is reasonable to define it to have two integer fields:

h for the number of hours, and
m for the number of minutes.
Notice the semicolon after the closing }, it is necessary:*/

class Time { 
public:
    int h;
    int m;
};

/*Alright, let’s try to use this new fancy type. There are several ways
for creating objects (or variables) of this type Time. The most explicit
one is to create an object (a variable) and then update its fields
individually:*/

Time now;    // creates a new variable (or object)
now.h = 17;  // assigns its hours field
now.m = 45;  // assigns its minutes field 

/*The object/variable is called now, and it is storing 5:45 PM. The fields
of now can be accessed as now.h ans now.m.

Alternatively, we can create an object and immediately initialize all
its fields with the following literal syntax (the order of values in
curly braces is important):*/

Time t = { 17, 45 };

/*Let’s write a printer function that prints a Time value on the screen
in HOURS:MINUTES format:*/

void printTime(Time time) {
    cout << time.h << ":" << time.m;
}

/*One convenient feature, which you might not need but should be aware of, is that
the assignment operator works for objects, it copies all the elements of the object,
field by field:*/

Time morningLecture = {8, 10};

Time myAlarm;              // make another variable

myAlarm = morningLecture;    // copying

printTime(morningLecture);   // will print 8:10
printTime(myAlarm);        // will print 8:10 as well
                           // You may be late for the class tho

int main(){
    
    return 0;
}
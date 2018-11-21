/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: Lab2C

Write a program edit-array.cpp that creates an array of 10 integers, and provides the user with an interface to edit any of its elements. Specifically, it should work as follows:

[1] Create an array myData of 10 integers.
[2] Fill all its cells with value 1 (using a for loop).
[3] Print all elements of the array on the screen.
[4] Ask the user to input the cell index i, and its new value v.
[5] If the index i is within the array range (0 ≤ i < 10), update the asked cell, myData[i] = v, and go back to the step 3. Otherwise, if index i is out of range, the program exits.
The repetition of the steps 3-4-5 can be implemented with a do while loop:
*/

#include <iostream>

using namespace std;


int main(){
    int myData [10];
    int userindex = 0;
    int userelementvalue = 0;
    for (int i =0; i < 10; i++)
    {
        myData[i] = 1;
        cout << myData[i] << " ";
    }
    do {
        cout << endl;
        cout << "Input the cell index:\n";
        cin >> userindex;
        if (0 <= userindex && userindex < 10)
        {
        cout << "New Element value:\n";
        cin >> userelementvalue;

            // cout << "userindex value is: " << userindex << endl;
            // cout << "userelementvalue value is: " << userelementvalue << endl;
            myData[userindex] = userelementvalue;
            for (int i =0; i < 10; i++)
                {
                    cout << myData[i] << " ";
                }
        }
    } while (0 <= userindex && userindex < 10);

    return 0;
}



// make array and fill it with 1
//do {
    // print the array
    // get i and v from the user
    // if i is good, update the array at index i
//} while (...); // if the index was good, repeat

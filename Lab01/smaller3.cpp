/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: Lab1B smaller of 3

maller3
Enter the first number: 23
Enter the second number: 76
Enter the third number: 37

The smaller of the three is 23

I want to try something new and do this with array and array maxmin tools
*/

#include <iostream>
#include <algorithm>    // min_element

using namespace std;

int main(){
    int userinputs [3];
    cout << "Enter the first number:" << endl;
    cin >> userinputs[0];
    cout << "Enter the second number:" << endl;
    cin >> userinputs[1];
    cout << "Enter the third number:" << endl;
    cin >> userinputs[2];
    // get the min of array userinputs
    int smallest = 0;
    smallest = *min_element(userinputs,userinputs+3);
    cout << "The smaller of the three is " << smallest <<endl;
    return 0;
}
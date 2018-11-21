/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: Lab1A, smaller of two

smaller
Enter the first number: 15
Enter the second number: -24

The smaller of the two is -24
*/

#include <iostream>

using namespace std;

int main(){
    int numb1 = 0;
    int numb2 = 0;
    cout << "Enter the first number: ";
    cin >> numb1;
    cout << "Enter the second number: ";
    cin >> numb2;
    if(numb1<numb2){
        cout << "The smaller of the two is" << numb1;
    }
    else{
        cout << "The smaller of the two is" << numb2;
    }
    return 0;
}
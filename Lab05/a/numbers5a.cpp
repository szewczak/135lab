/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: Lab5A. Is divisible?
Write a program numbers.cpp that defines a function

bool isDivisibleBy(int n, int d);
If n is divisible by d, the function should return true, otherwise return false.
    For example:
        isDivisibleBy(100, 25) == true
        isDivisibleBy(35, 17) == false
The program should also have a main function that tests your code. For example,
it can ask the user to input two integer numbers and print Yes if the first
number is divisible by the second, otherwise print No.


...*/
#include <iostream>
using namespace std;

bool isDivisibleBy(int n, int d){
    if(d==0){
        return false;
    }
    else return (n%d==0);
}

int main(){
    int n;
    int d;
    cout << "enter n: ";
    cin >> n;
    cout << "enter d: ";
    cin >> d;  

    if(isDivisibleBy(n,d)) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}
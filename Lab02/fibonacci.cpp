/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: Lab2D

Write a program fibonacci.cpp, which uses an array of ints to compute and print all Fibonacci numbers from F(0) to F(59).

Example:
0 
1 
1 
2 
3 
5 
8 
13 
// make an array
int fib[60];
// first two terms are given
fib[0] = 0
fib[1] = 1
// and all the following ones can be computed iteratively as
fib[i] = fib[i-1] + fib[i-2]
...*/

#include <iostream>

using namespace std;

int fib (int a, int b, int count)
{
    count--;
    if (count =! 0)
    {
        
        fib (b, (a+b),count);
    }
    return b;
}

int main(){
    cout << "enter "
    return 0;
}
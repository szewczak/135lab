/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment:  LabB. Is a prime?
A prime number is an integer greater or equal to 2 that is only divisible
by 1 and by itself. 

N is a prime if and only if it is not divisible evenly by any of the
numbers from 2 to N−1. Let’s implement this decision as a function.

In the same program numbers.cpp, add a function

bool isPrime(int n);
The function should return true if n is a prime, otherwise return
false. Change the main function to test your new code.

...*/
#include <iostream>
using namespace std;

bool isDivisibleBy(int n, int d){
    if(d==0){
        return false;
    }
    else return (n%d==0);
}

bool isPrime(int n){
    int count = 0;  //incrments when n is diviisible by i
    if(n <=1) return false;
    else{
    for(int i = 1; i < n;i++){
        if(isDivisibleBy(n,i)){
            count++;
        }
    }
    }
    if(count < 2) return true;
    if(count >=2) return false;
}


int main(){
    int n;
    for(int i=1; i < 12; i++){
        printf("%02d is prime: %d\n", i, isPrime(i));
    }
    return 0;
}
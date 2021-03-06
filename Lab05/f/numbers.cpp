/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment:  Lab5F Next twin prime
Add a function

int nextTwinPrime(int n);
that returns the smallest twin prime greater than n.
Change the main function to test the new code.
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
    if(n<=1) return false;
    else
    {    int count = 0;
        for(int i = 1; i < n;i++){
            if(isDivisibleBy(n,i)) count++;
        }
        return(count < 2);
    }
}

int nextPrime(int n){
   for(n;n > 0;n++){
        if(isPrime(n)){
            return n;
            break;
        }
    }
}

int countPrimes(int a, int b){
    int count=0;
    for(a; a <= b; a++){
        if(isPrime(a)) count++;
    }
    return count;
}

bool isTwinPrime(int n){
    return(isPrime(n)&&n>2&&(isPrime(n+2)||isPrime(n-2)));
}

int nextTwinPrime(int n){
//returns the smallest twin prime greater than n.
    if(n<0) return 3;
    else
    {
        n++;
        for(n;n > 0;n++){
            if(isTwinPrime(n)){
                return n;
                break;
            }
        }
    }
}

int main(){
    int n;
    cout << "n: ";
    cin >> n;
    printf("Next twin prime after %03d is %03d\n" ,n , nextTwinPrime(n));
    //printf is perfectly fine and compiles complex statements in an elegant way
    return 0;
}
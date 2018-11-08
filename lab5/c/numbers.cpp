/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment:  LabC. Next prime
Add a function

int nextPrime(int n);
that returns the smallest prime greater than n.

For example:
nextPrime(14) == 17
nextPrime(17) == 19
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
    int count = 0;  //incrments when n is diviisible by i
    for(int i = 1; i < n;i++){
        if(isDivisibleBy(n,i)){
            count++;
        }
    }
    return(count < 2);
}

int nextPrime(int n){
    if(n<=0) return 2;
    else{    
        if(isPrime(n)) n=n+1;
        for(n;n > 0;n++){
            if(isPrime(n)){
                return n;
                break;
            }
        }
    }
}

int main(){
    int n;
    cout << "enter n: ";
    cin >> n;
    cout << nextPrime(n) <<endl;
    return 0;
}
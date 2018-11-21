/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment:  Lab D. Count primes in range
Add a function

int countPrimes(int a, int b);
that returns the number of prime numbers in the
interval a ≤ x ≤ b. Change the main function to
test the new code.

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

int main(){
    int n;
    int m;
    cout << "Start n: ";
    cin >> n;
    cout << "End m: ";
    cin >> m;
    cout << countPrimes(n,m) <<endl;
    return 0;
}
/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment:  Lab5E. Is a twin prime?
A prime number N is called a twin prime if either N-2 or N+2 (or both of them) is also a prime.
For example, a prime 17 is a twin prime, because 17+2 = 19 is a prime as well.
The first few twin primes are: 3, 5, 7, 11, 13, 17, 19, 29, 31 …

Add a function

bool isTwinPrime(int n);
that determines whether or not its argument is a twin prime. Change the main function to test the new code.

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
    bool check = true;
    for(int i = 2; i < n;i++){
        if(isDivisibleBy(n,i)){
            check = false;
        }
    }
    return check;
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
    n++;
    for(n;n > 0;n++){
        if(isTwinPrime(n))
        return n;
        break;
    }
}

int main(){
    int n;
    cout << "n: ";
    cin >> n;
    cout << "next twin prime: "<< nextTwinPrime(n) <<endl;
    return 0;
}
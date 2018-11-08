/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment:  Lab5G. Largest twin prime in range
Add a function

int largestTwinPrime(int a, int b);
that returns the largest twin prime in the range a ≤ N ≤ b.
If there is no twin primes in range, then return -1.

For example:
largestTwinPrime(5, 18) == 17
largestTwinPrime(1, 31) == 31
largestTwinPrime(14, 16) == -1
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

int largestTwinPrime(int a, int b){
    // returns the largest twin prime in the range a ≤ N ≤ b.
    int output = -1;
    // b--; 
    for(b;b>a;b--){
        if(isTwinPrime(b)){
            output = b;
            break; //stop testing we found the best one.
        }
    }
    return output;
}

int main(){
    int n;
    cout << "n: ";
    cin >> n;
    int m;
    cout << "m: ";
    cin >> m;
    printf("Next largest twinprime after betwix %02d and %02d is %02d\n" ,n , m, largestTwinPrime(n,m));
    //printf is perfectly fine and compiles complex statements in an elegant way
    return 0;
}
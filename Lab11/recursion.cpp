/*
    Author: Nick Szewczak
    Course: CSCI-136
    Instructor: Subhadarshi Panda
    Assignment: Lab 11 Task B. Sum of numbers in range
    In the same program recursion.cpp, add a function

    int sumRange(int left, int right);
    that computes the sum of all numbers in range left ≤   x   ≤ right. (Don’t use loops, global or static variables.)

    A usage example:

    int main() {
        int x = sumRange(1, 3);
        cout << This is << x << endl;   // 6
        
        int y = sumRange(-2, 10);
        cout << That is << y << endl;   // 52
    }
    What makes it different from the previous example, this function has to return the answer:

    if the range is empty, the sum is zero.
    Otherwise sum(left, right) = left + sum(left + 1, right).
*/

#include <iostream>

using namespace std;

int sumRange(int left, int right){
    if(left > right){
        return 0;
    }
    if(left < right){
        return left + sumRange(left+1, right);
    }
    else return left;
}

void printRange(int left, int right){
    if(left <= right){
        cout << left << " ";
        printRange(left+1, right);
    }
}

int main(){
    cout << sumRange(-2,10) << endl;
    return 0;
}
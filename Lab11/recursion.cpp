/*
    Author: Nick Szewczak
    Course: CSCI-136
    Instructor: Subhadarshi Panda
    Assignment: Lab 11 Task C. Sum of elements in array
        In the same program, add a new function

        int sumArray(int *arr, int size);
        which receives an array (as a pointer to its first element) and the size of the array, and should return the sum of its elements. The function itself should not do any new dynamic memory allocations.

        There are several approaches to this task:

        One possible strategy is to define a helper function
        sumArrayInRange(int *arr, int left, int right);
        which adds up all elements of the passed array, but only for indexes in the interval left ≤ i ≤ right. It can be implemented very similarly to the function sumRange, but it should be adding the elements of the array instead of range indices. 
        Then sumArray(arr, size) can be defined as 
        sumArrayInRange(arr, 0, size-1).

        Alternatively, can you maybe get away with just using the original function?
        A usage example:

        int main() {

            int size = 10;
            int *arr = new int[size]; // allocate array dynamically
            arr[0] = 12;
            arr[1] = 17;
            arr[2] = -5;
            arr[3] = 3;
            arr[4] = 7;
            arr[5] = -15;
            arr[6] = 27;
            arr[7] = 5;
            arr[8] = 13;
            arr[9] = -21;

            int sum1 = sumArray(arr, size); // Add all elements
            cout << "Sum is " << sum1 << endl;  // Sum is 43
            
            int sum2 = sumArray(arr, 5); // Add up first five elements
            cout << "Sum is " << sum2 << endl;  // Sum is 34

            delete[] arr;         // deallocate it
        }
*/

#include <iostream>

using namespace std;

int sumArrayWIndex(int *arr, int i, int size){
    if(i < size){
        return arr[i] + sumArrayWIndex(arr, i+1, size);
    }
    else return 0;
}

int sumArray(int *arr, int size){
    return sumArrayWIndex(arr, 0, size);
}

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
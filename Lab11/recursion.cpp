/*
    Author: Nick Szewczak
    Course: CSCI-136
    Instructor: Subhadarshi Panda
    Assignment: Lab 11 Task D. Is string alphanumeric?
        In the same program, add a new function

        bool isAlphanumeric(string s);
        which returns true if all characters in the string are letters and 
        digits, otherwise returns false.

        A usage example:

        cout << isAlphanumeric("ABCD") << endl;        // true (1)
        cout << isAlphanumeric("Abcd1234xyz") << endl; // true (1)
        cout << isAlphanumeric("KLMN 8-7-6") << endl;  // false (0)
        The logic is similar to the sumRange function:

        if the sting is empty, return true.
        Otherwise,
        check the first character, and
        check that the rest of the string is alphanumeric.
        You may use the string function substr(pos, len), which extracts 
        a substring. It takes two parameters, the starting position and 
        the length of the substring. For example:

        string msg = "ABCDEFGH";
        cout << msg.substr(2, 4);   // CDEF (start at char [2] and
                                    //       take 4 characters)
*/

#include <iostream>
#include <string>

using namespace std;

bool isAlphanumericWPointer(string s, int index){
    if(index < s.length()){
        bool CharAtIndex = isalnum(s.at(index));
        // if(CharAtIndex){
        //     cout << s.at(index) << " - Alpha Numeric\n";
        // }
        // else{
        //     cout << s.at(index) << " - Other TYPE\n";
        // }
        return (CharAtIndex & isAlphanumericWPointer(s,index+1));
    }
    else return true;
}

bool isAlphanumeric(string s){
    return isAlphanumericWPointer(s, 0);
}

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
    // string String = "Helloworld";
    // if(isAlphanumeric(String)){
    //     cout << "\nTRUE\n";
    // }
    return 0;
}
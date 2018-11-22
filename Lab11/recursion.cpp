/*
    Author: Nick Szewczak
    Course: CSCI-136
    Instructor: Subhadarshi Panda
    Assignment: Lab 11 Task F (Bonus). Fair division
        Alice and Bob inherited a collection of paintings. However, 
        they will receive it only if the collection can be divided into 
        two parts of exactly equal price. (Otherwise, it will be donated 
        to a local art museum.)

        Is the collection divisible into two exactly equal halves? We have 
        to find the answer.

        The prices of the paintings are provided as an array of integers. 
        For example:

        int prices [] = {10, 15, 12, 18, 19, 17, 13, 35, 33};
        Here, the total sum is 172, so each person should receive the sum 
        of 86. In this specific example, a solution exists, it is the 
        following partition: 
            (10 + 15 + 12 + 19 + 17 + 13) = (18 + 35 + 33) = 86.
    */

#include <iostream>
#include <string>

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

bool walkThroughDivision(
    int  *prices,   // original array
    int  i,         // position in original array
    int  size,      // size of original array
    int  aSum,      // 'left'  sum
    int  bSum       // 'right' sum
    ){
    if(i < size){
        // adding price[i] two both tree branches
        return (
            walkThroughDivision(prices,i+1,size,aSum+prices[i],bSum)
            ||
            walkThroughDivision(prices,i+1,size,aSum,bSum+prices[i])
            );
    }
    else{
        return (aSum == bSum);
    }
}

bool divisible(int *prices, int size){
    return walkThroughDivision(prices, 0, size, 0, 0);
}

bool nestedParensWithIndex(string s, int i){
    if(i < (s.length()/2)){
        // clog << i << " is less than " << s.length()/2 << endl;
        if(s.at(i) == '(' && s.at(s.length()-1-i) == ')'){
            // clog << "flanked by (  ) \n";
            return nestedParensWithIndex(s, i+1);
        }
        else return false;
    }
    else return true;
}

bool nestedParens(string s){
    if(s.length()%2 == 0){
        // clog << "equal length stirng\n";
        return nestedParensWithIndex(s, 0);
    }
    else return false;
}

bool isAlphanumericWPointer(string s, int i){
    if(i < s.length()){
        bool CharAti = isalnum(s.at(i));
        // if(CharAti){
        //     cout << s.at(i) << " - Alpha Numeric\n";
        // }
        // else{
        //     cout << s.at(i) << " - Other TYPE\n";
        // }
        return (CharAti & isAlphanumericWPointer(s,i+1));
    }
    else return true;
}
bool isAlphanumeric(string s){
    return isAlphanumericWPointer(s, 0);
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
    int myarray [4] = {4, 3, 2, 2};
    if(divisible(myarray, 4)){
        cout << "true\n";
    }

    return 0;
}
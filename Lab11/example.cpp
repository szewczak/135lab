/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: example
*/

#include <iostream>

using namespace std;

void countdown(int n){
    if(n > 0){
        cout << n << endl;
        countdown(n-1);
    }
    else{
        cout << "done!\n";
    }
}

int main(){
    countdown(12);
    return 0;
}
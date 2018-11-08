/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: title, e.g., Lab1A

Here, briefly, at least in one or a few sentences
describe what the program does.
*/

#include <iostream>

using namespace std;

int main(){
    
    string book = "In a hole in the ground there lived a hobbit...";

    string *p;   // declaring a pointer.
    p = &book;   // storing the address of 'book' in the pointer

    cout << *p << endl; // dereferecing the pointer for printing 
                        // the book on the screen

    cout << p << endl;  // However, if you print the pointer itself,
                        // you will see a hexadecimal code like:
                        // 0x0A274B3A
    return 0;
}
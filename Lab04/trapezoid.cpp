/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: Lab4F. Upside-down trapezoid
Write a program trapezoid.cpp that prints an upside-down trapezoid of given width and height.

However, if the input height is impossibly large for the given width, then the program should report, Impossible shape!

Example 1:
    Input width: 12
    Input height: 5

    Shape:
    ************
     **********
      ********
       ******
        ****    
Example 2:
    Input width: 12
    Input height: 7

    Impossible shape!
...*/

#include <iostream>
using namespace std;

bool evaltrapezoid(int width, int height){      //returns true if inputs are a viable trapezoid shape
        if(width % 2 == 0){ //even numbers
            if((width)/2 >= height && width >= 3) return true;
            else return false;
        }
        else{  //odd numbers
            if ((width+1)/2 >= height && width >= 3) return true;
            else return false;
        }
}

void printline(int width,int depth){           //prints a single line of a trapezoid
    string s(depth,' ');
    string t(width - (depth*2), '*');
    s = s+t;
    cout << s;
    cout << endl;
}

void trapezoid(int width, int height){          //manages each call of printline() to build a trapezoid
    for(int i = 0; i < height; i++){
        printline(width, i);
    }
}

int main() {                                    //main hadles console in and launches function tree
    int width;
    int height;
    cout << "Input width: ";
    cin  >> width;
    cout << "\nInput height: ";
    cin  >> height;
    cout << "\nShape:\n";

    if(evaltrapezoid(width, height)){
        trapezoid(width, height);
    }
    else{
        cout << "Impossible shape!" << endl;
    }
    return 0;
}
/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: Lab4G. Checkerboard (3x3)

Write a program checkerboard3x3.cpp that asks the user to
input width and height and prints a checkerboard of 3-by-3
squares. (It should work even if the input dimensions are
not a multiple of three.)

Example 1:              | Example 2:                  |
Input width: 16         | Input width: 27             |
Input height: 11        | Input height: 27            |
                        |                             |
Shape:                  | Shape:                      |
***   ***   ***         | ***   ***   ***   ***   *** |
***   ***   ***         | ***   ***   ***   ***   *** |
***   ***   ***         | ***   ***   ***   ***   *** |
   ***   ***   *        |    ***   ***   ***   ***    |
   ***   ***   *        |    ***   ***   ***   ***    |
   ***   ***   *        |    ***   ***   ***   ***    |
***   ***   ***         | ***   ***   ***   ***   *** |
***   ***   ***         | ***   ***   ***   ***   *** |
***   ***   ***         | ***   ***   ***   ***   *** |
   ***   ***   *        |    ***   ***   ***   ***    |
   ***   ***   *        |    ***   ***   ***   ***    |
                        |    ***   ***   ***   ***    |   
                        | ***   ***   ***   ***   *** |   
                        | ***   ***   ***   ***   *** |   
                        | ***   ***   ***   ***   *** |   
                        |    ***   ***   ***   ***    |   
                        |    ***   ***   ***   ***    |   
                        |    ***   ***   ***   ***    |
                        | ***   ***   ***   ***   *** |   
                        | ***   ***   ***   ***   *** |   
                        | ***   ***   ***   ***   *** |   
                        |    ***   ***   ***   ***    |   
                        |    ***   ***   ***   ***    |   
                        |    ***   ***   ***   ***    |   
                        | ***   ***   ***   ***   *** |   
                        | ***   ***   ***   ***   *** |   
                        | ***   ***   ***   ***   *** |
...*/

#include <iostream> //cout-cin
using namespace std;

int main(){
    int width;
    int height;
    cout << "Input width: ";
    cin >> width;
    cout << "Input height: ";
    cin >> height;
    // genlines(width);
    int fullsquare = (width/6)+1;
    string s = "   ***";
    string t;
    string v = "***";
    for(int i=0; i < fullsquare;i++){
        t = t + s;
    }
    v = v + t;
    t = t.substr(0,width);  //concat lines to length
    v = v.substr(0,width);  //concat lines to length
    cout << "\nShape:\n";

    for(int i=0; i < height; i++){
        if(i%6==0) cout << v << endl;
        if(i%6==1) cout << v << endl;
        if(i%6==2) cout << v << endl;
        if(i%6==3) cout << t << endl;
        if(i%6==4) cout << t << endl;
        if(i%6==5) cout << t << endl;        
    }
    
return 0;
}
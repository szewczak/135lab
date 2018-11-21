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
///global array
string abarray[2];
void genlines (int width){
    int fullsquare = (width/6)+1;
    string s = "   ***";
    string t;
    string v = "***";
    for(int i; i < fullsquare;i++){
        t = t + s;
    }
    v = v + t;
    t = t.substr(0,width);  //concat lines to length
    v = v.substr(0,width);  //concat lines to length
    abarray[1] = t;         //push to global
    abarray[0] = v;         //push to global
}
void printgrid (int height){
    for(int i; i < height; i++){
            if(i%6==0) cout << abarray[0] << endl;
            if(i%6==1) cout << abarray[0] << endl;
            if(i%6==2) cout << abarray[0] << endl;
            if(i%6==3) cout << abarray[1] << endl;
            if(i%6==4) cout << abarray[1] << endl;
            if(i%6==5) cout << abarray[1] << endl;        
    }
}
int main(){
    int width;
    int height;
    cout << "Input width: ";
    cin >> width;
    cout << "Input height: ";
    cin >> height;
    genlines(width);
    cout << "\nShape:\n";
    printgrid(height);
    
return 0;
}
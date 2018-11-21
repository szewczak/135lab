/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: Lab3EXAMPLE


...*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

int main(){
    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1); // exit if failed to open the file
    }
    string junk;        // new string variable
    getline(fin, junk); // read one line from the file 
    string date = 0;
    string eastSt = 0;
    string eastEl = 0;
    string westSt = 0;
    string westEl = 0;
    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl){ 
        // this loop reads the file line-by-line
        // extracting 5 values on each iteration 
        
        fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                            //ignorring the remaining columns 

        // for example, to print the date and East basin storage:
        cout << date << " " << eastSt << endl;
    }
    fin.close();
}
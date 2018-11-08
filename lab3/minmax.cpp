/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: Lab3B

Write a program minmax.cpp that finds the minimum and maximum storage in East basin in 2016.

Example (using made up numbers):
    $ ./minmax
    minimum storage in East basin: 61.13 billion gallons
    MAXimum storage in East basin: 69.22 billion gallons
...*/

#include <iostream>  //cout for debugging
#include <fstream>   //FileStream access
#include <cstdlib>   // ??
#include <climits>   // max min

using namespace std;

int main(){
    string date;        // format 06/13/16
    float eaststore;
    float eaststoremin = 999999999999999;   // Ashokan East Elevation minimum
    float eaststoremax = 0;   // Ashokan East Elevation maximum
    string test;      // Debug output    

    ifstream myspreadsheet("Current_Reservoir_Levels.tsv");
    if (myspreadsheet.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1); // exit if failed to open the file
    }
    getline(myspreadsheet,test);
    // cout << test<< endl;
    while(myspreadsheet >> date >> eaststore){
        myspreadsheet.ignore(INT_MAX, '\n'); //skips to the end of line
        // cout << date << "\t" << eaststore << endl;
        if(eaststore < eaststoremin){
            eaststoremin = eaststore;
        }
        if(eaststore > eaststoremax){
            eaststoremax = eaststore;
        }
    }
    cout << "minimum storage in East basin: "<<eaststoremin <<" billion gallons\n";
    cout << "MAXimum storage in East basin: "<<eaststoremax <<" billion gallons\n";
    myspreadsheet.close();
    return 0;
}
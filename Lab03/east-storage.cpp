/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: Lab3A

Write a program east-storage.cpp that asks the user to input a string representingthe
date (in MM/DD/YYYY format), and prints out the East basin storage on that day.

Example
    $ ./east-storage
    Enter date: 05/20/2016
    East basin storage: 79.88 billion gallons
...*/

#include <iostream>  //cout for debugging
#include <fstream>   //FileStream access
#include <cstdlib>   // ??
#include <climits>   // max min

using namespace std;

int main(){
    string usrdate = ""; // cin date from user
    string date;        // format 06/13/16
    float eaststore;   // Ashokan East Elevation
    string test;      // Debug output    

    cout << "Enter date: \n";
    cin >> usrdate;

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
        if(date == usrdate){
            // cout << "MATCH!!" << endl;
            cout << "East basin storage: " << eaststore << " billion gallons" << endl;
            break;
        }
    }
    myspreadsheet.close();
    return 0;
}
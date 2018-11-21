/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: Lab3C

Write a program compare.cpp that asks the user to input two dates (the beginning and the end of the interval). The program should check each day in the interval and report which basin had higher elevation on that day by printing “East” or “West”, or print “Equal” if both basins are at the same level.

Example:
    $ ./compare
    Enter starting date: 09/13/2016
    Enter ending date: 09/17/2016

    09/13/2016 East
    09/14/2016 East
    09/15/2016 Equal
    09/16/2016 West
    09/17/2016 West
...*/

#include <iostream>  //cout for debugging
#include <fstream>   //FileStream access
#include <cstdlib>   // ??
#include <climits>   // max min

using namespace std;

int main(){
    string startingdate;
    string endingdate;
    string date;        // format 06/13/2016
    float eaststore;
    float westbasin;
    string test;      // Debug output
    float notread;
    string evaluation;
    bool printlatch = false;    

    ifstream myspreadsheet("Current_Reservoir_Levels.tsv");
    if (myspreadsheet.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1); // exit if failed to open the file
    }

    cout << "Enter starting date: \n";
    cin >> startingdate;
    cout << "Enter ending date: \n";
    cin >> endingdate;
    cout << endl;

    getline(myspreadsheet,test);
    // cout << test<< endl;
    while(myspreadsheet >> date >> notread >> eaststore >> notread >> westbasin){
        myspreadsheet.ignore(INT_MAX, '\n'); //skips to the end of line
        if(startingdate == date){
            printlatch = true;
        }
        if(printlatch){
            if(eaststore > westbasin){
                evaluation = " East";
            }
            else if(eaststore < westbasin){
                evaluation = " West";
            }
            else if(eaststore == westbasin){
                evaluation = " Equal";
            }
            cout << date << evaluation <<endl;
            if(endingdate == date){
                printlatch = false;
            }
        }
    }
    myspreadsheet.close();
    return 0;
}
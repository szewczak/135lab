/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: Lab3D

Write a program reverse-order.cpp which asks the user to input two dates 
(earlier date then later date). The program should report the West basin 
elevation for all days in the interval in the reverse chronological order 
(from the later date to the earlier).

Example:
$ ./reverse-order
Enter earlier date: 05/29/2016
Enter later date: 06/02/2016

06/02/2016  587.66 ft
06/01/2016  587.81 ft
05/31/2016  587.93 ft
05/30/2016  588.02 ft
05/29/2016  588.17 ft
Hint: If for the previous tasks you did not use arrays, 
here you really have to read the data into arrays first, and only then report them in the required order.
...*/

#include <iostream>  //cout for debugging
#include <fstream>   //FileStream access
#include <cstdlib>   // ??
#include <climits>   // max min

using namespace std;

int main(){
/// Variables
    int i = 0;               // index of last item and for loop operator
    int j = 367;                   // index of first item
    string date;             // format 06/13/16
    string datestart;
    string dateend;
    string elevation;
    string test;             // Debug output
    string datearray[366];

/// cin
    cout << "enter start date: \n";
    cin >> datestart;   // disable for debug
                        // datestart = "06/02/2016";
                        // cout << datestart << endl;
    cout << "enter end date:\n";
    cin >> dateend;
                        // dateend = "06/02/2016";
                        // cout << dateend << endl;
    // cout << endl;

/// open spreadsheet
    ifstream myspreadsheet("Current_Reservoir_Levels.tsv");
    if (myspreadsheet.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1); // exit if failed to open the file
    }
    getline(myspreadsheet,test); // skips over the header line of spreadsheet
    // cout << test<< endl;

/// fill array with our target string
    while(myspreadsheet >> date >> test >> test >> test >> elevation){
        myspreadsheet.ignore(INT_MAX, '\n'); //skips to the end of line
        i++;

        datearray[i] = date + " " + elevation + " ft";
        // cout << i << "\t" << datearray[i] << endl;
        if(date == datestart){
            j = i;
        }
        if(date == dateend){
            break;
        }

        else{
        }
    }
    myspreadsheet.close();

/// print out selection of datearray
    // cout << "\n final values\n";
    for(i; i >= j; i--){
        cout /*<< i << "\t" */<< datearray[i] << endl;
    }
    return 0;
}
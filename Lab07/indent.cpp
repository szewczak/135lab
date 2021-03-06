/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: Lab7 Task B.
Counting blocks opened and closed by { and }, and adding real indentation
To count open blocks, we need to count how many curly braces get opened and closed on each line, so we need to count { and }

Write a function

int countChar(string line, char c);
that scans the line and returns the number of occurrences of the character c.

Write a new program indent.cpp that enhances the program from the previous task. As it reads the input line by line, it should also count the number of open and closed { } in it, and keep track of how many blocks is currently open at the beginning of each line.

In the listing below, the number of open blocks is shown on the left:

0   int main(){
1   // Hi, I'm a program!
1   int x = 1; 
1   for(int i = 0; i < 10; i++) {
2   cout << i;
2   cout << endl;
2   }
1   }
Then instead of printing the number of open blocks, add that number of tabs '\t' at the beginning of each line, and you will get:

int main(){
    // Hi, I'm a program!
    int x = 1; 
    for(int i = 0; i < 10; i++) {
        cout << i;
        cout << endl;
        } // <-- closing for loop
    }     // <-- closing main
Notice that the closing curly braces are indented one level further than what they should be.

To fix that, when indenting the line, check its very first character. If it is a closing curly brace }, its indentation level should be reduced by one:

int main(){
    // Hi, I'm a program!
    int x = 1; 
    for(int i = 0; i < 10; i++) {
        cout << i;
        cout << endl;
    } 
}     
*/

#include<iostream>
#include<string>
#include<sstream>

// #include<regex> //regex not working on gradescope ::tears::

using namespace std;


string removeLeadingSpaces(string line){
    string outLine;
    bool printlatch=false;  //latches us into search term
    for (int i=0; i < line.length(); i++){
        if (!isspace(line[i])){
             printlatch = true;
        }
        if (printlatch) outLine += line[i];
    }
    return outLine;
    // line = regex_replace(line, regex("^ +| +$|( ) +"), "$1");  //regex not working on gradescope ::tears::
}

int countChar(string line, char c){
    int count;
    for(int i=0;i<line.length();i++){
        if(line[i]==c)
            count++;
    }
    return count;
}

string addLeadingSpaces(string multiLine){
    string result;
    istringstream cleanStream(multiLine);
    int indentDepth = 0;
    string atindent = "";
    for(string line; getline(cleanStream, line); ) {
        if(line[0] == '}'){         // IF first line is a '}' reduce by one for THIS LINE
            atindent = string(indentDepth - 1, '\t');
        }
        else{
            atindent = string(indentDepth, '\t');
        }
        result += atindent + line + "\n";
        indentDepth += countChar(line, '{') - countChar(line, '}');  //track changed to indentation level for NEXT LINE TO PRINT, not THIS LINE
    }
    return result;
}

int main(){
    string fileName;
    string cleanString;
    while(getline(cin, fileName)){
        cleanString += removeLeadingSpaces(fileName) + "\n";
    }
    cout << addLeadingSpaces(cleanString);
    return 0;
}
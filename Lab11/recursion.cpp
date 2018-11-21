/*
    Author: Nick Szewczak
    Course: CSCI-136
    Instructor: Subhadarshi Panda
    Assignment: Lab 11 Task E. Nested parentheses
        Add a new function

        bool nestedParens(string s);
        which returns true if the string is a sequence of nested 
        parentheses:

        Strings "", "()", "(())", "((()))" … are all correct sequences 
        and should return true. Any other symbols or mismatching 
        parenthesis should make the function return false.

        A usage example:

            cout << nestedParens("((()))") << endl;      // true (1)
            cout << nestedParens("()") << endl;          // true (1)
            cout << nestedParens("") << endl;            // true (1)

            cout << nestedParens("(((") << endl;         // false (0)
            cout << nestedParens("(()") << endl;         // false (0)
            cout << nestedParens(")(") << endl;          // false (0)
            cout << nestedParens("a(b)c") << endl;       // false (0)
    */

#include <iostream>
#include <string>

using namespace std;

// int nestedParensWithIndex(string s, int i, int depth){
//     if(i < s.length()){
//         if (s.at(i) == '('){
//             depth++;
//         }
//         if (s.at(i) == ')'){
//             depth--;
//         }
//         return nestedParensWithIndex(s, i+1, depth);
//     }
//     else return 0;
// }

// bool onlyParens(string s, int i){
//     if(i < s.length()){
//         return ( (s.at(i) == '(' | s.at(i) == ')') & onlyParens(s, i+1));
//     }
//     else return true;
// }

// bool nestedParens(string s){
//     if(onlyParens(s,0) & nestedParensWithIndex(s,0,0) == 0){
//         return true;
//     }
//     else return false;
// }

bool nestedParensWithIndex(string s, int i){
    if(i < (s.length()/2)){
        // clog << i << " is less than " << s.length()/2 << endl;
        if(s.at(i) == '(' && s.at(s.length()-1-i) == ')'){
            // clog << "flanked by (  ) \n";
            return nestedParensWithIndex(s, i+1);
        }
        else return false;
    }
    else return true;
}

bool nestedParens(string s){
    if(s.length()%2 == 0){
        // clog << "equal length stirng\n";
        return nestedParensWithIndex(s, 0);
    }
    else return false;
}

bool isAlphanumericWPointer(string s, int i){
    if(i < s.length()){
        bool CharAti = isalnum(s.at(i));
        // if(CharAti){
        //     cout << s.at(i) << " - Alpha Numeric\n";
        // }
        // else{
        //     cout << s.at(i) << " - Other TYPE\n";
        // }
        return (CharAti & isAlphanumericWPointer(s,i+1));
    }
    else return true;
}
bool isAlphanumeric(string s){
    return isAlphanumericWPointer(s, 0);
}

int sumArrayWIndex(int *arr, int i, int size){
    if(i < size){
        return arr[i] + sumArrayWIndex(arr, i+1, size);
    }
    else return 0;
}

int sumArray(int *arr, int size){
    return sumArrayWIndex(arr, 0, size);
}

int sumRange(int left, int right){
    if(left > right){
        return 0;
    }
    if(left < right){
        return left + sumRange(left+1, right);
    }
    else return left;
}

void printRange(int left, int right){
    if(left <= right){
        cout << left << " ";
        printRange(left+1, right);
    }
}

int main(){
    string String = "())(()))";
    if(nestedParens(String)){
        cout << "true\n";
    }

    return 0;
}
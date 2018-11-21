/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: Lab9 Task A. Length and distance in 3D space
A point in 3D space can be represented using three coordinates. In Cartesian coordinate system these coordinates are called (x,y,z), describing the position of the point along the three orthogonal axes: [img missing]
The origin of the coordinate system is denoted by O and has coordinates (0,0,0).
A point P=(x,y,z), together with the origin, defines a 3D vector OP. The distance from O to P, or in other words, the length of the vector OP can be computed using the euclidean distance formula:
                           _______________
Length of the vector OP = √x^2 + y^2 + z^2

We are provided with a struct type that represents coordinates in 3D:

class Coord3D {
public:
    double x;
    double y;
    double z;
};
Write a program 3d-space.cpp, in which you define a function length that receives the coordinates of a point P passed as a pointer, and computes the distance from the origin to the point P:

double length(Coord3D *p);
A usage example:

int main() {
    Coord3D pointP = {10, 20, 30};
    cout << length(&pointP) << endl; // would print 37.4166
}
Notice that we pass the memory address &pointP, where the struct object is located. The function should dereference this address to get the corresponding fields x, y, and z for computing the length.
*/

#include <iostream>
#include <cmath>

using namespace std;

class Coord3D {
public:
    double x;
    double y;
    double z;
};
double length(Coord3D *p){
    return (sqrt(pow((*p).x,2) + pow((*p).y,2) + pow((*p).z,2)));
}

int main(){
    Coord3D test;
    test.x = 1;
    test.y = 2;
    test.z = 3;
    cout << length(&test) << endl;
    return 0;
}
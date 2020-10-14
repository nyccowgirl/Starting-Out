/*
 Displays volume of cylindrical fuel tank.
 
 C3_10.cpp
 Starting Out/C03
 
 Created by nyccowgirl on 9/12/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    const double PI = 3.14159;
    
    double volume, radius, height;      // Holds volume, radius and height of cylinder
    
    cout << "This program will tell you the volume of\n";
    cout << "a cylinder-shaped fuel tank.\n";
    cout << "How tall is the tank? ";
    cin >> height;
    cout << "What is the radius of the tank? ";
    cin >> radius;
    volume = PI * pow(radius, 2.0) * height;
    cout << "Volume of cylinder: " << volume << endl;
    return 0;
}


/*
 
 This program will tell you the volume of
 a cylinder-shaped fuel tank.
 How tall is the tank? 2
 What is the radius of the tank? 3
 Volume of cylinder: 56.5486
 Program ended with exit code: 0
 
 */

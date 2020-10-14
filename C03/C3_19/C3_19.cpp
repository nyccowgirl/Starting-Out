/*
 Illustrates and displays stream manipulators. The program asks for an angle in degrees and
 converts it to radians.
 
 C3_19.cpp
 Starting Out/C03
 
 Created by nyccowgirl on 9/12/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    const double PI = 3.14159;      // Defines pi
    double degrees, radians;        // Holds degrees and radians variables
    
    cout << "Enter an angle in degrees and I will convert it\n";
    cout << "to radians for you: ";
    cin >> degrees;
    radians = degrees * PI / 180;
    cout << left << setprecision(4) << fixed << setw(5) << radians << endl;
    return 0;
}


/*
 
 Enter an angle in degrees and I will convert it
 to radians for you: 69
 1.2043
 Program ended with exit code: 0
 
 */

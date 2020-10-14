/*
 Illustrates and displays exit() function.

 C6_24.cpp
 Starting Out/C06
 
 Created by nyccowgirl on 9/15/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <cstdlib>
using namespace std;

void showVals(double, double);                          // Function prototype

int main(int argc, const char * argv[]) {
    double x = 1.2, y = 4.5;                            // Defines variables
    
    showVals(x, y);
    return 0;
}






// Definition of function showVals

void showVals(double p1, double p2) {
    cout << p1 << endl;
    exit(0);
    cout << p2 << endl;
}


/*
 
 1.2
 Program ended with exit code: 0
 
 */

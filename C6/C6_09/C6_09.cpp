/*
 Illustrates and displays functions.

 C6_09.cpp
 Starting Out/C6
 
 Created by nyccowgirl on 9/15/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;

void funcl(double, int);                    // Function prototype

int main(int argc, const char * argv[]) {
    
    int x = 0;                              // Defines x
    double y = 1.5;                         // Defines y
    
    cout << x << " " << y << endl;
    funcl(y, x);
    cout << x << " " << y << endl;
    return 0;
}






// Definition of function funcl.

void funcl(double a, int b) {
    cout << a << " " << b << endl;
    a = 0.0;
    b = 10;
    cout << a << " " << b << endl;
}


/*
 
 0 1.5
 1.5 0
 0 10
 0 1.5
 Program ended with exit code: 0
 
 */

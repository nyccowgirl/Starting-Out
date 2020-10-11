/*
 Illustrates and displays overloading functions.

 C6_25.cpp
 Starting Out/C6
 
 Created by nyccowgirl on 9/15/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;

int manip(int);                        // Function prototype
int manip(int, int);
int manip(int, double);

int main(int argc, const char * argv[]) {
    int x = 2, y = 4, z;                // Defines and holds variables
    double a = 3.1;
    
    z = manip(x) + manip(x, y) + manip(y, a);
    cout << z << endl;
    return 0;
}






// Definition of function manip(int)

int manip(int val) {
    return val + val * 2;
}






// Definition of function manip(int, int)

int manip(int val1, int val2) {
    return (val1 + val2) * 2;
}






// Definition of function manip(int, double)

int manip(int val1, double val2) {
    return val1 * static_cast<int>(val2);
}


/*
 
 30
 Program ended with exit code: 0
 
 */

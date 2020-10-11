/*
 Illustrates and displays conditional expressions.
 
 C4_26.cpp
 Starting Out/C4
 
 Created by nyccowgirl on 9/13/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    const int UPPER = 8, LOWER = 2;         // Defines upper and lower variables
    int num1, num2, num3 = 12, num4 = 3;    // Holds a number of variables
    
    num1 = num3 < num4 ? UPPER : LOWER;
    num2 = num4 > UPPER ? num3 : LOWER;
    cout << num1 << " " << num2 << endl;
    return 0;
}


/*
 
 2 2
 Program ended with exit code: 0
 
 */

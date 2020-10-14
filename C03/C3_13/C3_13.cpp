/*
 Illustrates and displays differences between integer and double.
 
 C3_13.cpp
 Starting Out/C03
 
 Created by nyccowgirl on 9/12/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int integer1, integer2;     // Holds different integers
    double result;              // Holds results of calculations of integers
    
    integer1 = 19;
    integer2 = 2;
    result = integer1 / integer2;
    cout << result << endl;
    result = static_cast<double>(integer1) / integer2;
    cout << result << endl;
    result = static_cast<double>(integer1 / integer2);
    cout << result << endl;
    return 0;
}


/*
 
 9
 9.5
 9
 Program ended with exit code: 0
 
 */

/*
 Calculates stored formulas from user input.
 
 C3_09.cpp
 Starting Out/C3
 
 Created by nyccowgirl on 9/12/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    double value1, value2, value3;      // Holds three numbers
    
    cout << "Enter a number: ";
    cin >> value1;
    value2 = 2 * pow(value1, 2.0);
    value3 = 3 + value2 / 2 - 1;
    cout << value3 << endl;
    return 0;
}


/*
 
 Enter a number: 2
 6
 Program ended with exit code: 0
 
 Enter a number: 5
 27
 Program ended with exit code: 0
 
 Enter a number: 4.3
 20.49
 Program ended with exit code: 0
 
 Enter a number: 6
 38
 Program ended with exit code: 0
 
 */

/*

 Program illustrates using pointers in functions.
 C9_11.cpp
 Starting Out/C9
 
 Created by nyccowgirl on 10/4/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <iomanip>
using namespace std;


void convert(double *measurement);


int main(int argc, const char * argv[]) {
    double measurement;
    
    cout << "Enter a length in inches, and I will convert\n";
    cout << "it to centimeters: ";
    cin >> measurement;
    convert(&measurement);
    cout << fixed << setprecision(4);
    cout << "Value in centimeters: " << measurement << endl;

    return 0;
}






// Definition of function convert.

void convert(double *measurement) {
    *measurement *= 2.54;
}


/*
 
 Enter a length in inches, and I will convert
 it to centimeters: 2
 Value in centimeters: 5.0800
 Program ended with exit code: 0
 
 */

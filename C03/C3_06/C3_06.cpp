/*
 This program converts pounds to kilograms.
 
 C3_06.cpp
 Starting Out/C03
 
 Created by nyccowgirl on 9/12/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    double pounds, kilograms;      // Holds pounds and kilograms
    
    cout << "Enter your weight (in pounds): ";
    cin >> pounds;
    kilograms = pounds / 2.2;
    cout << "Your weight (in kilograms): " << kilograms << endl;
    return 0;
}


/*
 
 Enter your weight (in pounds): 95
 Your weight (in kilograms): 43.1818
 Program ended with exit code: 0
 
 */

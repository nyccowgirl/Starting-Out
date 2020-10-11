/*
 MARKUP
 
 Program to calculate retail price from wholesale cost and markup provided by user input.

 PC6_01.cpp
 Starting Out/C6
 
 Created by nyccowgirl on 9/16/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <iomanip>
using namespace std;


double calculateRetail(double cost, double margin);     // Function prototypes
void inputValidation(double &input);


int main(int argc, const char * argv[]) {
    double wholesale, markup;                           // Holds wholesale cost and markup %
    
    cout << "Enter the wholesale cost: ";
    cin >> wholesale;
    inputValidation(wholesale);
    cout << "Enter the markup percentage (e.g., 100% = 100): ";
    cin >> markup;
    inputValidation(markup);
    markup /= 100;
    cout << "The retail prices is $";
    cout << setprecision(2) << fixed << calculateRetail(wholesale, markup) << "." << endl;
    return 0;
}






// Definition of function inputValidation. Function passes in input to ensure it is not a
// negative number.

void inputValidation(double &input) {
    while (input < 0) {
        cout << "Error ~ Number cannot be negative, please re-enter: ";
        cin >> input;
    }
}






// Definition of function calculateRetail. Function passes in the wholesale cost and markup
// percentage and returns the retail price.

double calculateRetail(double cost, double margin) {
    return cost * (1 + margin);
}


/*
 
 Enter the wholesale cost: -5
 Error ~ Number cannot be negative, please re-enter: 5
 Enter the markup percentage (e.g., 100% = 100): 100
 The retail prices is $10.00.
 Program ended with exit code: 0
 
 Enter the wholesale cost: 5
 Enter the markup percentage (e.g., 100% = 100): -50
 Error ~ Number cannot be negative, please re-enter: 50
 The retail prices is $7.50.
 Program ended with exit code: 0
 
 */

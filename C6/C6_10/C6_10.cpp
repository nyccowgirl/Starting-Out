/*
 Illustrates and displays functions.

 C6_10.cpp
 Starting Out/C6
 
 Created by nyccowgirl on 9/15/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <iomanip>
using namespace std;

void showDollars(double);                   // Function prototype

int main(int argc, const char * argv[]) {
    
    double payRate, hoursWorked, wages;    // Holds pay rate, hours worked and wage.
    
    cout << "How many hours have you worked? ";
    cin >> hoursWorked;
    cout << "What is your hourly pay rate? ";
    cin >> payRate;
    wages = hoursWorked * payRate;
    showDollars(wages);
    return 0;
}






// Definition of function showDollars.

void showDollars(double wage) {
    cout << "Your wages are $" << setprecision(2) << fixed << wage << endl;
}


/*
 
 How many hours have you worked? 60
 What is your hourly pay rate? 150
 Your wages are $9000.00
 Program ended with exit code: 0
 
 */

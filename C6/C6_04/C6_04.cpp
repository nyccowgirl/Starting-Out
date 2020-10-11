/*
 Program that determines whether a person qualifies for a credit card.

 C6_04.cpp
 Starting Out/C6
 
 Created by nyccowgirl on 9/15/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;

void qualify();
void noQualify(double salary, int years);


int main(int argc, const char * argv[]) {
    
    double salary;                          // holds salary from user input
    int years;                              // holds years of employment from user input
    
    cout << "This program will determine if you qualify\n";
    cout << "for our credit card.\n";
    cout << "What is your annual salary? ";
    cin >> salary;
    cout << "How many years have you worked at your ";
    cout << "current job? ";
    cin >> years;
    
    if (salary >= 17000.0 && years >= 2) {
        qualify();
    } else {
        noQualify(salary, years);
    }
    return 0;
}






// Displays interest rate and qualification of user.

void qualify() {
    cout << "You qualify for the credit card with 12% annual interest rate." << endl;
}






// Explains why the user did not qualify for credit card.

void noQualify(double salary, int years) {
    if (salary < 17000.0) {
        cout << "You did not qualify for the credit card because your salary is below\n";
        cout << "the minimum of $17,000." << endl;
    } else {
        cout << "You did not qualify for the credit card because you have been employed\n";
        cout << "at your current job for less than two years." << endl;
    }
}


/*
 
 This program will determine if you qualify
 for our credit card.
 What is your annual salary? 50000
 How many years have you worked at your current job? 5
 You qualify for the credit card with 12% annual interest rate.
 Program ended with exit code: 0
 
 This program will determine if you qualify
 for our credit card.
 What is your annual salary? 5000
 How many years have you worked at your current job? 10
 You did not qualify for the credit card because your salary is below
 the minimum of $17,000.
 Program ended with exit code: 0
 
 This program will determine if you qualify
 for our credit card.
 What is your annual salary? 100000
 How many years have you worked at your current job? 1
 You did not qualify for the credit card because you have been employed
 at your current job for less than two years.
 Program ended with exit code: 0
 
 */

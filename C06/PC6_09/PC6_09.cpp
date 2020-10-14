/*
 PRESENT VALUE
 
 Program calculates the present value or the amount that a user would need to deposit in a
 savings account in order to receive a certain amount, given a term and stated interest
 rate, all specified by the user.
 
 PC6_09.cpp
 Starting Out/C06
 
 Created by nyccowgirl on 9/18/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


double presentValue(double future, double interest, int term);  // Function prototypes


int main(int argc, const char * argv[]) {

    double presentVal, futureVal, rate;              // Holds future value and interest rate
    int years;                                       // Holds term in years
    
    cout << "What is the amount you would like to have saved in the future? ";
    cin >> futureVal;
    cout << "What is the annual interest rate? (e.g., 2 for 2%) ";
    cin >> rate;
    cout << "How many years do you plan on keeping the money in the savings account? ";
    cin >> years;
    
    presentVal = presentValue(futureVal, rate, years);
    
    cout << fixed << setprecision(2);
    cout << "You would need to deposit $" << presentVal;
    cout << " to earn $" << futureVal << " in " << years << " years." << endl;
    return 0;
}






// Definition of function presentValue. Function passes in future value of money, interest
// rate and term in years and returns the present value.

double presentValue(double future, double interest, int term) {
    return future / pow(1 + (interest/100), term);
}


/*
 
 What is the amount you would like to have saved in the future? 50000
 What is the annual interest rate? (e.g., 2 for 2%) 1.5
 How many years do you plan on keeping the money in the savings account? 10
 You would need to deposit $43083.36 to earn $50000.00 in 10 years.
 Program ended with exit code: 0
 
 */

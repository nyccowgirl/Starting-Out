/*
 WINNING DIVISION
 
 Program determines which of a company's four divisions (Northeast, Southeast, Northwest,
 and Southwest) had greatest sales for a quarter.
 
 PC6_03.cpp
 Starting Out/C6
 
 Created by nyccowgirl on 9/17/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <iomanip>
using namespace std;


const string NE = "Northeast";                             // Defines division names
const string SE = "Southeast";
const string NW = "Northwest";
const string SW = "Southwest";


double getSales(string division);                          // Function prototypes
void findHighest(double num1, double num2, double num3, double num4);


int main(int argc, const char * argv[]) {
    double neSales, seSales, nwSales, swSales;             // Holds sales for four divisions
    
    neSales = getSales(NE);
    seSales = getSales(SE);
    nwSales = getSales(NW);
    swSales = getSales(SW);
    findHighest(neSales, seSales, nwSales, swSales);
    return 0;
}






// Definition of function getSales. Function passes in name of division and asks user to
// input the division's quarterly sales amount, validates the input and returns the sales
// amount.

double getSales(string division) {
    double input;                               // Holds sales input from user
    
    do {
        cout << "Enter the sales for the " << division << " division: ";
        cin >> input;

        if (input < 0) {
            cout << "Error: Invalid sales figure. Dollar amount cannot be less than 0.\n";
        }
        
    } while (!(input >= 0));
    return input;
}






// Definition of function findHighest. Function passes in the sales amounts for all four
// divisions. It determines the division with the largest amount and displays the name of
// the division and its respective sales amount for the quarter. It does not account for
// if there are ties.

void findHighest(double num1, double num2, double num3, double num4) {
    double highest;                              // Holds highest sales figure

    cout << "The division with the largest sales for the quarter is ";
    
    if ((num1 > num2) && (num1 > num3) && (num1 > num4)) {
        cout << NE;
        highest = num1;
    } else if ((num2 > num1) && (num2 > num3) && (num2 > num4)) {
        cout << SE;
        highest = num2;
    } else if ((num3 > num1) && (num3 > num2) && (num3 > num4)) {
        cout << NW;
        highest = num3;
    } else {
        cout << SW;
        highest = num4;
    }
    
    cout << " with $" << setprecision(2) << fixed << highest << "." << endl;
}


/*
 
 Enter the sales for the Northeast division: -53
 Error: Invalid sales figure. Dollar amount cannot be less than 0.
 Enter the sales for the Northeast division: 0
 Enter the sales for the Southeast division: 4372
 Enter the sales for the Northwest division: 48392.374
 Enter the sales for the Southwest division: 48923.1
 The division with the largest sales for the quarter is Southwest with $48923.10.
 Program ended with exit code: 0
 
 */

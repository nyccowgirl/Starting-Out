/*
 PAINT JOB ESTIMATOR
 
 Program estimates number of gallons and hours of labor required; cost of paint; labor
 charges; and total cost of paint job from user input of number of rooms, size of walls and
 cost of paint per gallon.
 
 PC6_17.cpp
 Starting Out/C06
 
 Created by nyccowgirl on 9/19/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <iomanip>
using namespace std;


const double SQ_FT = 115.0;
const int GALLON = 1;
const int HOURS = 8;
const double WAGE = 18.00;


void calcLaborHours(int size, double &hours, double &cost);
void calcPaint(int size, double galCost, double &gallons, double &cost);


int main(int argc, const char * argv[]) {
    int rooms, wallSize, totalSize = 0;    // Holds various variables
    double costPerGal, laborHours, totalGallons, totalLaborCost, totalPaintCost;
    
    do {
        cout << "Enter the number of rooms to be painted: ";
        cin >> rooms;
        
        if (rooms < 1) {
            cout << "Invalid input: Number of rooms cannot be less than 1." << endl;
        }
    } while (rooms < 1);
    
    do {
        cout << "Enter the cost of the paint per gallon: ";
        cin >> costPerGal;
        
        if (costPerGal < 10.00) {
            cout << "Invalid input: Quality paint does not cost less than $10." << endl;
        }
    } while (costPerGal < 10.00);
    
    for (int count = 1; count <= rooms; count++) {
        do {
            cout << "Enter the square feet of wall space in Room " << count << ": ";
            cin >> wallSize;
            
            if (wallSize < 0) {
                cout << "Invalid input: Wall size cannot be less than 0." << endl;
            }
        } while (wallSize < 0);
        
        totalSize += wallSize;
    }

    calcLaborHours(totalSize, laborHours, totalLaborCost);
    calcPaint(totalSize, costPerGal, totalGallons, totalPaintCost);
    cout << "\n                 ESTIMATE FOR PAINT JOB" << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << "Number of gallons of paint required:";
    cout << setw(20) << fixed << setprecision(1) << totalGallons << endl;
    cout << "Hours of labor required:";
    cout << setw(32) << laborHours << endl;
    cout << "\n\nCost of paint:" << setw(37) << fixed << setprecision(2) << "$";
    cout << totalPaintCost << endl;
    cout << "Cost of labor:" << setw(35) << fixed << setprecision(2) << "$";
    cout << totalLaborCost << endl;
    cout << "Estimated total paint job:" << setw(23) << fixed << setprecision(2) << "$";
    cout << totalPaintCost + totalLaborCost << endl;
    return 0;
}






// Definition of function calcLaborHours. Function passes in total wall size by square feet,
// and calculates labor hours and total labor cost as reference variables.

void calcLaborHours(int size, double &hours, double &cost) {
    hours = (size / SQ_FT) * HOURS;
    cost = hours * WAGE;
}






// Definition of function calcPaint. Function passes in total wall size by square feet and
// cost per gallon of paint. It calculates total gallons and cost of paint as reference
// variables.

void calcPaint(int size, double galCost, double &gallons, double &cost) {
    gallons = (size / SQ_FT) * GALLON;
    cost = gallons * galCost;
}


/*
 
 Enter the number of rooms to be painted: 3
 Enter the cost of the paint per gallon: 11.11
 Enter the square feet of wall space in Room 1: 222
 Enter the square feet of wall space in Room 2: 333
 Enter the square feet of wall space in Room 3: 444

                  ESTIMATE FOR PAINT JOB
 --------------------------------------------------------
 Number of gallons of paint required:                 8.7
 Hours of labor required:                            69.5


 Cost of paint:                                    $96.51
 Cost of labor:                                  $1250.92
 Estimated total paint job:                      $1347.43
 Program ended with exit code: 0
 
 */

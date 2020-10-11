/*
 SAFEST DRIVING AREA
 
 Program determines which of fie geographic regions within a major city (north, south, east,
 west and central) had fewest reported automobile accidents last year.
 
 PC6_04.cpp
 Starting Out/C6
 
 Created by nyccowgirl on 9/17/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;


const string NORTH = "North";                           // Defines geographic regions
const string SOUTH = "South";
const string EAST = "East";
const string WEST = "West";
const string CEN = "Central";


int getNumAccidents(string region);                     // Function prototypes
void findLowest(int num1, int num2, int num3, int num4, int num5);


int main(int argc, const char * argv[]) {
    double accN, accS, accE, accW, accCen;              // Holds no. of accidents by region
    
    accN = getNumAccidents(NORTH);
    accS = getNumAccidents(SOUTH);
    accE = getNumAccidents(EAST);
    accW = getNumAccidents(WEST);
    accCen = getNumAccidents(CEN);
    findLowest(accN, accS, accE, accW, accCen);
    return 0;
}






// Definition of function getNumAccidents. Function passes in name of region and asks user
// to input the region's annual number of automobile accidents, validates the input and
// returns it.

int getNumAccidents(string region) {
    int input;                                       // Holds accidents input from user
    
    do {
        cout << "Enter the number of automobile accidents last year for the ";
        cout << region << " region: ";
        cin >> input;

        if (input < 0) {
            cout << "Error: Invalid input. Number of accidents cannot be less than 0.\n";
        }
        
    } while (!(input >= 0));
    return input;
}






// Definition of function findLowest. Function passes in the number of automobile accidents
// for all five regions in the city. It determines the region with the smallest amount and
// displays the name of the region and its respective number for last year. It does not
// account for if there are ties.

void findLowest(int num1, int num2, int num3, int num4, int num5) {
    double lowest;                                  // Holds lowest accidents figure

    cout << "The region with the smallest number of automobile accidents last year is ";
    
    if ((num1 < num2) && (num1 < num3) && (num1 < num4) && (num1 < num5)) {
        cout << NORTH;
        lowest = num1;
    } else if ((num2 < num1) && (num2 < num3) && (num2 < num4) && (num2 < num5)) {
        cout << SOUTH;
        lowest = num2;
    } else if ((num3 < num1) && (num3 < num2) && (num3 < num4) && (num3 < num5)) {
        cout << EAST;
        lowest = num3;
    } else if ((num4 < num1) && (num4 < num2) && (num4 < num3) && (num4 < num5)) {
        cout << WEST;
        lowest = num4;
    } else {
        cout << CEN;
        lowest = num5;
    }
    
    cout << " with " << lowest << " accidents." << endl;
}


/*
 
 Enter the number of automobile accidents last year for the North region: -10
 Error: Invalid input. Number of accidents cannot be less than 0.
 Enter the number of automobile accidents last year for the North region: 10
 Enter the number of automobile accidents last year for the South region: 53
 Enter the number of automobile accidents last year for the East region: 27
 Enter the number of automobile accidents last year for the West region: 111
 Enter the number of automobile accidents last year for the Central region: 7
 The region with the smallest number of automobile accidents last year is Central with 7 accidents.
 Program ended with exit code: 0
 
 */

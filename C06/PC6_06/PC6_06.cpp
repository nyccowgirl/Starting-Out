/*
 KINETIC ENERGY
 
 Program calculates kinetic energy from mass and velocity
 
 PC6_06.cpp
 Starting Out/C06
 
 Created by nyccowgirl on 9/18/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


double kineticEnergy(int mass, int velocity);           // Function prototypes


int main(int argc, const char * argv[]) {
    int kilograms, meters;                              // Holds mass and velocity
    
    cout << "Enter the object's mass (in kilograms): ";
    cin >> kilograms;
    cout << "Enter the object's velocity (in meters per second): ";
    cin >> meters;
    cout << "The kinetic energy of the object is ";
    cout << fixed << setprecision(2) << kineticEnergy(kilograms, meters) << "." << endl;
    return 0;
}






// Definition of function kineticEnergy. Function passes in mass (in kilograms) and
// velocity (in meters per second) and returns the kinetic energy.

double kineticEnergy(int mass, int velocity) {
    return ((mass * pow(velocity, 2.0)) / 2);
}


/*
 
 Enter the object's mass (in kilograms): 150
 Enter the object's velocity (in meters per second): 7
 The kinetic energy of the object is 3675.00.
 Program ended with exit code: 0
 
 */

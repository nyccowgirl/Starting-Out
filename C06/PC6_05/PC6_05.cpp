/*
 FALLING DISTANCE
 
 Program calculates distance in meters of a falling object based on amount of time in
 seconds, from 1 to 10 seconds.
 
 PC6_05.cpp
 Starting Out/C06
 
 Created by nyccowgirl on 9/17/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


const double GRAVITY = 9.8;                             // Defines gravity as meters/second


double fallingDistance(int time);                       // Function prototypes


int main(int argc, const char * argv[]) {
    int seconds = 10;                                   // Defines number of seconds
    
    cout << "Table of distance (in meters)\n";
    cout << "of falling object based on\n";
    cout << "time (in seconds)\n";
    cout << " Time           Distance" << endl;
    cout << "------         ----------" << endl;
    
    for (int count = 1; count <= seconds; count++) {
        cout << setw(5) << count;
        cout << setw(19) << fixed << setprecision(2) << fallingDistance(count) << endl;
    }
    
    return 0;
}






// Definition of function fallingDistance. Function passes in time (in seconds) and
// returns the distance (in meters).

double fallingDistance(int time) {
    return ((GRAVITY * pow(time, 2.0)) / 2);
}


/*
 
 Table of distance (in meters)
 of falling object based on
 time (in seconds)
  Time           Distance
 ------         ----------
     1               4.90
     2              19.60
     3              44.10
     4              78.40
     5             122.50
     6             176.40
     7             240.10
     8             313.60
     9             396.90
    10             490.00
 Program ended with exit code: 0
 
 */

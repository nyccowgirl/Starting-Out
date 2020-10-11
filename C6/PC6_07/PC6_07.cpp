/*
 CELSIUS TEMPERATURE TABLE
 
 Program displays a table converting fahrenheit to celsius, from 0 to 20 degrees.
 
 PC6_07.cpp
 Starting Out/C6
 
 Created by nyccowgirl on 9/18/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <iomanip>
using namespace std;


double celsius(int fahreinheit);                       // Function prototypes


int main(int argc, const char * argv[]) {
    int degrees = 20;                                   // Defines number of degrees
    
    cout << "Table of fahreinheit to celsius\n";
    cout << " Fahreinheit           Celsius" << endl;
    cout << "-------------         ---------" << endl;
    
    for (int count = 0; count <= degrees; count++) {
        cout << setw(7) << count;
        cout << setw(22) << fixed << setprecision(1) << celsius(count) << endl;
    }
    
    return 0;
}






// Definition of function celsius. Function passes in Fahreinheit (in degrees) and
// returns the Celsius equivalent (in degrees).

double celsius(int fahreinheit) {
    return ((5.0 / 9) * (fahreinheit - 32));
}


/*
 
 Table of fahreinheit to celsius
  Fahreinheit           Celsius
 -------------         ---------
       0                 -17.8
       1                 -17.2
       2                 -16.7
       3                 -16.1
       4                 -15.6
       5                 -15.0
       6                 -14.4
       7                 -13.9
       8                 -13.3
       9                 -12.8
      10                 -12.2
      11                 -11.7
      12                 -11.1
      13                 -10.6
      14                 -10.0
      15                  -9.4
      16                  -8.9
      17                  -8.3
      18                  -7.8
      19                  -7.2
      20                  -6.7
 Program ended with exit code: 0
 
 */

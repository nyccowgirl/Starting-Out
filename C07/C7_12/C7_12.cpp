/*
 Program illustrates array of doubles.
 
 C7_12.cpp
 Starting Out/C07
 
 Created by nyccowgirl on 9/21/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <iomanip>
using namespace std;


int main(int argc, const char * argv[]) {
    const double INTRATE = 0.1;
    double balance[5] = {100.0, 250.0, 325.0, 500.0, 1100.0};
    
    cout << fixed << showpoint << setprecision(2);
    
    for (int count = 0; count < 5; count++) {
        cout << (balance[count] * INTRATE) << endl;
    }
    return 0;
}


/*
 
 10.00
 25.00
 32.50
 50.00
 110.00
 Program ended with exit code: 0
 
 */

/*
 Illustrates and displays stream manipulators.
 
 C3_17.cpp
 Starting Out/C3
 
 Created by nyccowgirl on 9/12/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    cout << setprecision(2) << fixed << setw(9) << 34.789 << endl;
    cout << setprecision(3) << fixed << setw(5) << 7.0 << endl;
    cout << fixed << 5.789E12 << endl;
    cout << left << setw(7) << 67 << endl;
    return 0;
}


/*
 
     34.79
 7.000
 5789000000000.000
 67
 Program ended with exit code: 0
 
 */

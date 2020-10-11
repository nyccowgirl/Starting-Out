/*
 Illustrates and displays functions.

 C6_08.cpp
 Starting Out/C6
 
 Created by nyccowgirl on 9/15/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;

void showDouble(int);                   // Function prototype

int main(int argc, const char * argv[]) {
    
    int num;                            // Holds number
    
    for (num = 0; num < 10; num++) {
        showDouble(num);
    }
    return 0;
}






// Definition of function showDouble.

void showDouble(int value) {
    cout << value << "\t" << (value * 2) << endl;
}


/*
 
 0    0
 1    2
 2    4
 3    6
 4    8
 5    10
 6    12
 7    14
 8    16
 9    18
 Program ended with exit code: 0
 
 */

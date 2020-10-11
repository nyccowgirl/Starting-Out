/*
 Illustrates and displays for loops.
 
 C5_12.cpp
 Starting Out/C5
 
 Created by nyccowgirl on 9/13/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int count, number, sum = 0;         // Defines count and holds number input and sum
    
    for (count = 0; count < 7; count++) {
        cout << "Enter a number: ";
        cin >> number;
        sum += number;
    }
    
    cout << "Sum: " << sum << endl;
    
    return 0;
}


/*
 
 Enter a number: 34
 Enter a number: 83
 Enter a number: 111
 Enter a number: 99
 Enter a number: 532
 Enter a number: 573
 Enter a number: 948
 Sum: 2380
 Program ended with exit code: 0
 
 */

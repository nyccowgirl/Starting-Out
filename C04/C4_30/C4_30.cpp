/*
 Illustrates and displays switch statement.
 
 C4_30.cpp
 Starting Out/C04
 
 Created by nyccowgirl on 9/13/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int userNum;                // Holds variable inputted by user
    
    cout << "Enter one of the numbers 1, 2, or 3: ";
    cin >> userNum;
    switch (userNum) {
        case 1: cout << "one\n";
            break;
        case 2: cout << "two\n";
            break;
        case 3: cout << "three\n";
            break;
        default: cout << "error" << endl;
    }
    return 0;
}


/*
 
 Enter one of the numbers 1, 2, or 3: 2
 two
 Program ended with exit code: 0
 
 Enter one of the numbers 1, 2, or 3: 9
 error
 Program ended with exit code: 0
 
 */

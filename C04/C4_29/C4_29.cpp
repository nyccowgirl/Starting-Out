/*
 Illustrates and displays switch statement.
 
 C4_29.cpp
 Starting Out/C04
 
 Created by nyccowgirl on 9/13/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int funny = 7, serious = 15;        // Defines funny and serious
    
    funny = serious * 2;
    switch (funny) {
        case 0: cout << "That is funny.\n";
            break;
        case 30: cout << "That is serious.\n";
            break;
        case 32: cout << "That is seriously funny.\n";
            break;
        default: cout << funny << endl;
    }
    return 0;
}


/*
 
 That is serious.
 Program ended with exit code: 0
 
 */

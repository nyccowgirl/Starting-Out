/*
 Illustrates and displays if/else statements.
 
 C4_16.cpp
 Starting Out/C4
 
 Created by nyccowgirl on 9/12/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int funny = 7, serious = 15;        // Defines variables
    
    funny = serious % 2;
    
    if (funny != 1) {
        funny = 0;
        serious = 0;
    } else if (funny == 2) {
        funny = 10;
        serious = 10;
    } else {
        funny = 1;
        serious = 1;
    }
    
    cout << funny << "" << serious << endl;
    return 0;
}


/*
 
 11
 Program ended with exit code: 0
 
 */

/*
 Illustrates and displays static local and global variables.

 C6_18.cpp
 Starting Out/C6
 
 Created by nyccowgirl on 9/15/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;

void showVar();                              // Function prototype

int main(int argc, const char * argv[]) {
    
    for (int count = 0; count < 10; count++) {
        showVar();
    }
    return 0;
}






// Definition of function showVar

void showVar() {
    static int var = 10;
    
    cout << var << endl;
    var++;
}


/*
 
 10
 11
 12
 13
 14
 15
 16
 17
 18
 19
 Program ended with exit code: 0
 
 */

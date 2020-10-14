/*
 Illustrates and displays static local and global variables.

 C6_17.cpp
 Starting Out/C06
 
 Created by nyccowgirl on 9/15/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;

void myFunc();                              // Function prototype

int main(int argc, const char * argv[]) {
    
    int var = 100;                          // Defines var
    
    cout << var << endl;
    myFunc();
    cout << var << endl;
    return 0;
}






// Definition of function myFunc

void myFunc() {
    int var = 50;
    
    cout << var << endl;
}


/*
 
 100
 50
 100
 Program ended with exit code: 0
 
 */

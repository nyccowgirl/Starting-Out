/*
 Illustrates and displays stream manipulators.
 
 C3_18.cpp
 Starting Out/C03
 
 Created by nyccowgirl on 9/12/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    string person = "Wolfgang Smith";   // Defines person variable
    
    cout << right;
    cout << setw(20);
    cout << person << endl;
    cout << left;
    cout << person << endl;
    return 0;
}


/*
 
       Wolfgang Smith
 Wolfgang Smith
 Program ended with exit code: 0
 
 */

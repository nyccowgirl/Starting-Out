/*
 Illustrates and displays combined assignment operators.
 
 C3_16.cpp
 Starting Out/C3
 
 Created by nyccowgirl on 9/12/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int unus, duo, tres;        // Holds different integers
    
    unus = duo = tres = 5;
    unus += 4;
    duo *= 2;
    tres -= 4;
    unus /= 3;
    duo += tres;
    cout << unus << endl;
    cout << duo << endl;
    cout << tres << endl;
    return 0;
}


/*
 
 3
 11
 1
 Program ended with exit code: 0
 
 */

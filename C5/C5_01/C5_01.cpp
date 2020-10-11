/*
 Illustrates and displays increment and decrement statements.
 
 C5_01.cpp
 Starting Out/C5
 
 Created by nyccowgirl on 9/13/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int x, y;                // Holds variables
    
    x = 2;
    y = x++;
    cout << x << y << endl;
    
    x = 2;
    y = ++x;
    cout << x << y << endl;
    
    x = 2;
    y = 4;
    cout << x++ << --y << endl;
    
    x = 2;
    y = 2 * x++;
    cout << x << y << endl;
    
    x = 99;
    
    if (x++ < 100) {
        cout << "It is true!\n";
    } else {
        cout << "It is false!\n";
    }
    
    x = 0;
    
    if (++x) {
        cout << "It is true!\n";
    } else {
        cout << "It is false!\n";
    }
    return 0;
}


/*
 
 32
 33
 23
 34
 It is true!
 It is true!
 Program ended with exit code: 0
 
 */

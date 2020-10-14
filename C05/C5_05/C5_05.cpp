/*
 Illustrates and displays do-while loops.
 
 C5_05.cpp
 Starting Out/C05
 
 Created by nyccowgirl on 9/13/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int count = 10;         // Defines count variable
    
    do {
        cout << "Hello World\n";
        count++;
    } while (count < 1);
    
    int v = 10;             // Defines v variable
    
    do {
        cout << v << endl;
    } while (v < 5);
    
    int count1 = 0, number = 0, limit = 4;
    
    do {
        number += 2;
        count1++;
    } while (count < limit);
    cout << number << " " << count1 << endl;
    
    return 0;
}


/*
 
 Hello World
 10
 2 1
 Program ended with exit code: 0
 
 */

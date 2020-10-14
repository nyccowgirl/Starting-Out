/*
 Illustrates and displays if/else statements.
 
 C4_15.cpp
 Starting Out/C04
 
 Created by nyccowgirl on 9/12/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int number;      // Holds a number
    
    cout << "Enter a number: ";
    cin >> number;
    
    if (number > 0) {
        cout << "Zero\n";
        
        if (number > 10) {
            cout << "Ten\n";
            
            if (number > 20) {
                cout << "Twenty\n";
            }
        }
    }
    return 0;
}


/*
 
 Enter a number: 5
 Zero
 Program ended with exit code: 0
 
 Enter a number: 15
 Zero
 Ten
 Program ended with exit code: 0
 
 Enter a number: 30
 Zero
 Ten
 Twenty
 Program ended with exit code: 0
 
 Enter a number: -1
 Program ended with exit code: 0
 
 */

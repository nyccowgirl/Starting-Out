/*
 Displays ASCII code of a character input from user.
 
 C3_12.cpp
 Starting Out/C3
 
 Created by nyccowgirl on 9/12/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    char letter;      // Holds letter
    
    cout << "Enter a character: ";
    cin >> letter;
    cout << "ASCII code: " << static_cast<int>(letter) << endl;
    return 0;
}


/*
 
 Enter a character: A
 ASCII code: 65
 Program ended with exit code: 0
 
 */

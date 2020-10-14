/*
 Illustrates and displays switch statement.
 
 C4_31.cpp
 Starting Out/C04
 
 Created by nyccowgirl on 9/13/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int selection;                // Holds variable inputted by user
    
    cout << "Which formula do you want to see?\n\n";
    cout << "1. Area of a cirle\n";
    cout << "2. Area of a rectangle\n";
    cout << "3. Area of a cyclinder\n";
    cout << "4. None of them!\n";
    cin >> selection;
    
    switch (selection) {
        case 1: cout << "Pi times radius squared\n";
            break;
        case 2: cout << "Length times width\n";
            break;
        case 3: cout << "Pi times radius squared times height\n";
            break;
        case 4: cout << "Well okay then, good bye!\n";
        default: cout << "Not good with numbers, eh?\n";
    }
    return 0;
}


/*
 
 Which formula do you want to see?

 1. Area of a cirle
 2. Area of a rectangle
 3. Area of a cyclinder
 4. None of them!
 3
 Pi times radius squared times height
 Program ended with exit code: 0
 
 Which formula do you want to see?

 1. Area of a cirle
 2. Area of a rectangle
 3. Area of a cyclinder
 4. None of them!
 9
 Not good with numbers, eh?
 Program ended with exit code: 0
 
 */

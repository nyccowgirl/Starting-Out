/*
 Short program that reads numbers from file and displays them.
 
 C5_23.cpp
 Starting Out/C05
 
 Created by nyccowgirl on 9/13/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inputFile;
    int number;                          // Hold number
    
    inputFile.open("demofile.txt");
    
    if (inputFile) {
        while (inputFile >> number) {
            cout << number << endl;
        }
        
        inputFile.close();
    } else {
        cout << "Error opening the file." << endl;
    }
    
    return 0;
}


/*
 
 1
 2
 3
 4
 5
 6
 7
 8
 9
 10
 Program ended with exit code: 0
 
 */

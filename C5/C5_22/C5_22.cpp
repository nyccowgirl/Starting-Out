/*
 Short program that uses for loop to write numbers 1 through 10 to a file.
 
 C5_22.cpp
 Starting Out/C5
 
 Created by nyccowgirl on 9/13/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ofstream outputFile;
    int count;                          // Hold count
    
    outputFile.open("demofile.txt");
    
    for (count = 0; count < 10; count++) {
        outputFile << (count + 1) << endl;
    }
    
    cout << "The numbers were saved to a file." << endl;
    
    outputFile.close();
    cout << "Done." << endl;
    return 0;
}


/*
 
 The numbers were saved to a file.
 Done.
 Program ended with exit code: 0
 
 */

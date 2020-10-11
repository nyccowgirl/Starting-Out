/*
 Illustrates and displays input validation loops.
 
 C5_O2_04.cpp
 Starting Out/C5
 
 Created by nyccowgirl on 9/13/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int number;             // Holds number input by user
    char ch;                // Holds Y/y/N/n response input by user
    string response;        // Holds Yes or No response input by user
    
    cout << "Enter a number from 10 through 25: ";
    cin >> number;
    
    while (number < 10 || number > 25) {
        cout << "ERROR: Enter a number from 10 through 25: ";
        cin >> number;
    }
    
    cout << "Enter a yes or no response (Y/N or y/n): ";
    cin >> ch;
    
    while (ch != 'Y' && ch != 'y' && ch != 'N' && ch != 'n') {
        cout << "ERROR: Enter a yes or no response in the correct format (Y/N or y/n): ";
        cin >> ch;
    }
    
    cout << "Enter a yes or no response (Yes/No): ";
    cin >> response;
    
    while (response != "Yes" && response != "No") {
        cout << "ERROR: Enter a yes or no response in the correct format (Yes/No): ";
        cin >> response;
    }
    
    return 0;
}


/*
 
 Enter a number from 10 through 25: 99
 ERROR: Enter a number from 10 through 25: 11
 Enter a yes or no response (Y/N or y/n): x
 ERROR: Enter a yes or no response in the correct format (Y/N or y/n): n
 Enter a yes or no response (Yes/No): apple
 ERROR: Enter a yes or no response in the correct format (Yes/No): Yes
 Program ended with exit code: 0
 
 */

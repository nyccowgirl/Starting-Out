/*
 DATE PRINTER
 
 Write a program that reads a string from the user containing a date in the form mm/dd/yyyy.
 It should print the date in the form March 12, 2012.
 
 PC10_13.cpp
 Starting Out/C10
 
 Created by nyccowgirl on 10/9/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <cctype>
using namespace std;


const int SIZE = 20;
const string MONTHS[12] = {"January", "February", "March", "April", "May", "June", "July",
                           "August", "September", "October", "November", "December"};


bool verifyDate(const char *date, const int length);


int main(int argc, const char * argv[]) {
    char date[SIZE], buffer[SIZE];
    char *str;
    bool valid;
    int index = 0, length, number;
    
    do {
        cout << "Enter a date (mm/dd/yyyy): ";
        cin.getline(date, SIZE);
        length = static_cast<int>(strlen(date));

        valid = verifyDate(date, length);
        
        if (!(valid)) {
            cout << "That is not a valid format. Example of valid format: 01/01/2021\n";
        }
        
    } while (!(valid));
        
    str = date;
    cout << "The date entered is: ";
        
    while (date[index] != '\0') {
        
        if (isdigit(date[index])) {
            strncat(buffer, str, 1);
        } else if (index == 2) {
            number = atoi(buffer);
            cout << MONTHS[number - 1] << " ";
            buffer[0] = '\0';
        } else if (date[index] == '/') {
            number = atoi(buffer);
            cout << number << ", ";
            buffer[0] = '\0';
        }
        index++;
        str++;
    }
    number = atoi(buffer);
    cout << number << endl;
    return 0;
}






// Definition of verifyDate

bool verifyDate(const char *date, const int length) {
    int index = 0;
    
    if (length != 10) {
        return false;
    }
    
    while (date[index] != '\0') {
        
        if (!(isdigit(date[index])) && !(index == 2 && date[index] == '/') && !(index == 5 && date[index] == '/'))
        {
            return false;
        }
        index++;
    }
    return true;
}


/*
 
 Enter a date (mm/dd/yyyy): 11/11/1111
 The date entered is: November 11, 1111
 Program ended with exit code: 0
 
 */

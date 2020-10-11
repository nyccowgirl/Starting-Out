/*
 DAYS OUT
 
 Program obtains number of employees at a company and calculates the average number of days
 a company's employees are absent.
 
 PC6_12.cpp
 Starting Out/C6
 
 Created by nyccowgirl on 9/19/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <iomanip>
using namespace std;


int getAbsence(int employees);                  // Function prototpypes
double calcAverage(int employees, int sum);


int main(int argc, const char * argv[]) {
    int noEmp, total;                           // Holds number of employees and total days
    
    do {
        cout << "Enter the number of employees at the company: ";
        cin >> noEmp;
        
        if (noEmp < 1) {
            cout << "Invalid input: Number of employees should be more than 0." << endl;
        }
    } while (noEmp < 1);
    
    total = getAbsence(noEmp);
    cout << fixed << setprecision(2);
    cout << "The average number of days missed per employee is ";
    cout << calcAverage(noEmp, total) << "." << endl;
    
    return 0;
}






// Definition of function getAbsence. The functions gets the number of days absent from
// each employee and returns the total days absent.

int getAbsence(int employees) {
    int sum = 0, absence;                               // Holds the total of days absent
    
    for (int count = 1; count <= employees; count++) {
                
        do {
            cout << "Enter the total number of days that Employee " << count << " missed: ";
            cin >> absence;
            
            if (absence < 0) {
                cout << "Invalid input: missed days cannot be less than 0." << endl;
            }
            
        } while (absence < 0);
        
        sum += absence;
    }
    return sum;
}






// Definition of function calcAverage. Function passes in number of employees and total days
// missed and returns the average number of days absent per employee.

double calcAverage(int employees, int sum) {
    return sum / static_cast<double>(employees);
}


/*
 
 Enter the number of employees at the company: 0
 Invalid input: Number of employees should be more than 0.
 Enter the number of employees at the company: 5
 Enter the total number of days that Employee 1 missed: 3
 Enter the total number of days that Employee 2 missed: -2
 Invalid input: missed days cannot be less than 0.
 Enter the total number of days that Employee 2 missed: 2
 Enter the total number of days that Employee 3 missed: 4
 Enter the total number of days that Employee 4 missed: 8
 Enter the total number of days that Employee 5 missed: 7
 The average number of days missed per employee is 4.80.
 Program ended with exit code: 0
 
 */

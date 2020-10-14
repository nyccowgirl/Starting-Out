/*
 OVERLOADED HOSPITAL
 
 Program displays the charges for a patient's hospital stay, based on whether the patient
 was in or out patient.
 
 PC6_14.cpp
 Starting Out/C06
 
 Created by nyccowgirl on 9/19/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <iomanip>
using namespace std;


double calcInPatient(int days, double rate, double meds, double labs);
double calcOutPatient(double meds, double labs);
bool validateInput(int input);
bool validateInput(double input);


int main(int argc, const char * argv[]) {
    char type;
    int days;
    double rate, meds, labs;
    
    do {
        cout << "Was patient admitted as in-patient (I) or out-patient (O)? ";
        cin >> type;
        
        if (!(type == 'I' || type == 'i' || type == 'O' || type == 'o')) {
            cout << "Invalid input: patient is either I for in- or O for out-patient.\n";
        } else if (type == 'I' || type == 'i') {
            type = 'I';
        } else {
            type = 'O';
        }
        
    } while (!(type == 'I' || type == 'O'));
        
    if (type == 'I') {
        do {
            cout << "Enter the days the patient spent in the hospital: ";
            cin >> days;
        } while (validateInput(days) == false);
        
        do {
            cout << "Enter the daily rate: ";
            cin >> rate;
        } while (validateInput(rate) == false);
    }
    
    do {
        cout << "Enter the charges for hospital medication: ";
        cin >> meds;
    } while (validateInput(meds) == false);
        
    do {
        cout << "Enter any other charges for hospital services (e.g., lab tests): ";
        cin >> labs;
    } while (validateInput(labs) == false);
    
    cout << "\n          Patient Bill" << endl;
    cout << "--------------------------------" << endl;
    cout << "Total charges: $" << setprecision(2) << fixed;
    cout << (type == 'I' ? calcInPatient(days, rate, meds, labs) :
             calcOutPatient(meds, labs)) << endl;
    return 0;
}






// Definition of function validateInput. Functions passes in variable to validate and

bool validateInput(int input) {
    if (input < 0) {
        cout << "Invalid input: number cannot be less than 0." << endl;
        return false;
    } else {
        return true;
    }
}






// Definition of function validateInput. Functions passes in variable to validate and

bool validateInput(double input) {
    if (input < 0) {
        cout << "Invalid input: number cannot be less than 0." << endl;
        return false;
    } else {
        return true;
    }
}






// Definition of function calcInPatient. Function passes in days in hospital, daily rate,
// hospital medication charges, and hospital services charges. It calculates and returns
// charges.

double calcInPatient(int days, double rate, double meds, double labs) {
    return (days * rate) + meds + labs;
}






// Definition of function calcOutPatient. Function passes hospital medication charges, and
// hospital services charges. It calculates and returns charges.

double calcOutPatient(double meds, double labs) {
    return meds + labs;
}

/*
 
 Was patient admitted as in-patient (I) or out-patient (O)? x
 Invalid input: patient is either I for in- or O for out-patient.
 Was patient admitted as in-patient (I) or out-patient (O)? i
 Enter the days the patient spent in the hospital: 15
 Enter the daily rate: 150.5
 Enter the charges for hospital medication: 225.25
 Enter any other charges for hospital services (e.g., lab tests): 111.11

           Patient Bill
 --------------------------------
 Total charges: $2593.86
 Program ended with exit code: 0
 
 Was patient admitted as in-patient (I) or out-patient (O)? o
 Enter the charges for hospital medication: 438.2
 Enter any other charges for hospital services (e.g., lab tests): 531.01

           Patient Bill
 --------------------------------
 Total charges: $969.21
 
 */

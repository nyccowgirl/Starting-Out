/*
 RAINFALL STATISTICS
 
 Program lets user enter total rainfall for each of 12 months. It will calculate and display
 the total rainfall for the year, average monthly rainfall and months with the highest and
 lowest amounts.
 
 PC7_02.cpp
 Starting Out/C7
 
 Created by nyccowgirl on 9/22/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <iomanip>
using namespace std;


const int NO_MONTHS = 12;
const string MONTHS[NO_MONTHS] = {"January", "February", "March", "April", "May", "June",
                                  "July", "August", "September", "October", "November",
                                  "December"};


void getRainfall(double arr[], int size);
double calcAnnual(const double arr[], int size);
void calcAvg(double annual);
void displayHighest(const double arr[], int size);
void displayLowest(const double arr[], int size);


int main(int argc, const char * argv[]) {
    double rain[NO_MONTHS];
    double sum;
    
    getRainfall(rain, NO_MONTHS);
    sum = calcAnnual(rain, NO_MONTHS);
    calcAvg(sum);
    displayHighest(rain, NO_MONTHS);
    displayLowest(rain, NO_MONTHS);
    
    return 0;
}






// Definition of function getRainfall.

void getRainfall(double arr[], int size) {
    cout << "Enter rainfall (in inches) for the following months:" << endl;
    
    for (int x = 0; x < size; x++) {
        do {
            cout << MONTHS[x] << ": ";
            cin >> arr[x];
            
            if (!(arr[x] >= 0)) {
                cout << "Invalid input: Rainfall cannot be less than 0." << endl;
            }
        } while (!(arr[x] >= 0));
    }
}






// Definition of function calcAnnual.

double calcAnnual(const double arr[], int size) {
    double total = 0;
    
    for (int x = 0; x < size; x++) {
        total += arr[x];
    }
    
    cout << "The total annual rainfall is " << total << " inches." << endl;
    return total;
}






// Definition of function calcAvg.

void calcAvg(double annual) {
    cout << fixed << setprecision(2);
    cout << "The average monthly rainfall is " << (annual / NO_MONTHS) << " inches.\n";
}






// Definition of function displayHighest.

void displayHighest(const double arr[], int size) {
    int highest, month = 0;
    
    highest = arr[0];
    
    for (int x = 1; x < size; x++) {
        if (arr[x] > highest) {
            highest = arr[x];
            month = x;
        }
    }
    
    cout << MONTHS[month] << " had the most rainfall at " << highest << " inches." << endl;
}






// Definition of function displayLowest.

void displayLowest(const double arr[], int size) {
    int lowest, month = 0;
    
    lowest = arr[0];
    
    for (int x = 1; x < size; x++) {
        if (arr[x] < lowest) {
            lowest = arr[x];
            month = x;
        }
    }
    
    cout << MONTHS[month] << " had the least rainfall at " << lowest << " inches." << endl;
}


/*
 
 Enter rainfall (in inches) for the following months:
 January: 2
 February: -4
 Invalid input: Rainfall cannot be less than 0.
 February: 4
 March: 7
 April: 8
 May: 11
 June: 2
 July: 5
 August: 14
 September: 16
 October: 11
 November: 8
 December: 1
 The total annual rainfall is 89 inches.
 The average monthly rainfall is 7.42 inches.
 September had the most rainfall at 16 inches.
 December had the least rainfall at 1 inches.
 Program ended with exit code: 0
 
 */

/*
 CHIPS AND SALSA
 
 Program lets maker of chips and salsa keep track of sales for five different types of salsa
 (mild, medium, sweet, hot and zesty).
 
 PC7_03.cpp
 Starting Out/C07
 
 Created by nyccowgirl on 9/23/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <iomanip>
using namespace std;


const int SIZE = 5;
const string TYPES[SIZE] = {"mild", "medium", "sweet", "hot", "zesty"};


void getSales(int arr[], int size);
void displaySales(const int arr[], int size);
void calcTotal(const int arr[], int size);
void displayHighest(const int arr[], int size);
void displayLowest(const int arr[], int size);


int main(int argc, const char * argv[]) {
    int sales[SIZE];
    
    getSales(sales, SIZE);
    displaySales(sales, SIZE);
    calcTotal(sales, SIZE);
    displayHighest(sales, SIZE);
    displayLowest(sales, SIZE);
    
    return 0;
}






// Definition of function getSales.

void getSales(int arr[], int size) {
    cout << "Enter total number of jars sold for the following salsa types:" << endl;
    
    for (int x = 0; x < size; x++) {
        do {
            cout << TYPES[x] << ": ";
            cin >> arr[x];
            
            if (!(arr[x] >= 0)) {
                cout << "Invalid input: Jars sold cannot be less than 0." << endl;
            }
        } while (!(arr[x] >= 0));
    }
}






// Definition of function displaySales.

void displaySales(const int arr[], int size) {
    cout << "\n TYPE          SALES " << endl;
    cout << "------        -------" << endl;
    for (int x = 0; x < SIZE; x++) {
        cout << left << setw(6) << TYPES[x] << right << setw(14) << arr[x] << endl;
    }
}






// Definition of function calcTotal.

void calcTotal(const int arr[], int size) {
    int total = 0;
    
    cout << right << setw(21) << "-------" << endl;
    
    for (int x = 0; x < size; x++) {
        total += arr[x];
    }
    
    cout << "TOTAL" << right << setw(15) << total << endl << endl;
}






// Definition of function displayHighest.

void displayHighest(const int arr[], int size) {
    int highest, type = 0;
    
    highest = arr[0];
    
    for (int x = 1; x < size; x++) {
        if (arr[x] > highest) {
            highest = arr[x];
            type = x;
        }
    }
    
    cout << "Highest selling salsa: " << TYPES[type] << endl;
}






// Definition of function displayLowest.

void displayLowest(const int arr[], int size) {
    int lowest, type = 0;
    
    lowest = arr[0];
    
    for (int x = 1; x < size; x++) {
        if (arr[x] < lowest) {
            lowest = arr[x];
            type = x;
        }
    }
    
    cout << "Lowest selling salsa: " << TYPES[type] << endl;
}


/*
 
 Enter total sales for the following salsa types:
 mild: 123
 medium: 456
 sweet: 77
 hot: 432
 zesty: 111
 
  TYPE          SALES
 ------        -------
 mild             123
 medium           456
 sweet             77
 hot              432
 zesty            111
               -------
 TOTAL           1199
 
 Highest selling salsa: medium
 Lowest selling salsa: sweet
 Program ended with exit code: 0
 
 */

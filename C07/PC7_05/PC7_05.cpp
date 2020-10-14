/*
 RAIN OR SHINE
 
 Program lets a meterorologist keep track of weather conditions during past year's three-
 month summer season.
 
 PC7_05.cpp
 Starting Out/C07
 
 Created by nyccowgirl on 9/23/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <fstream>
#include <iomanip>
#include <cassert>
using namespace std;


const int NO_DAYS = 30;
const int NO_MONTHS = 3;
const int NO_TYPES = 3;
const string MONTHS[NO_MONTHS] = {"June", "July", "August"};
const string TYPE[NO_TYPES] = {"Rainy", "Cloudy", "Sunny"};


void readWeather(char arr1[][NO_DAYS], int NO_MONTHS);
void calcTotal(const char arr1[][NO_DAYS], int arr2[][NO_TYPES], int NO_MONTHS,
               int &rainyTot, int &cloudyTot, int &sunnyTot);
void displayTotals(const int arr2[][NO_TYPES], int NO_MONTHS, int rainyTot, int cloudyTot,
                   int sunnyTot);
void displayHighest(const int arr2[][NO_TYPES], int NO_MONTHS);


int main(int argc, const char * argv[]) {
    char weather[NO_MONTHS][NO_DAYS];
    int totalByMth[NO_TYPES][NO_MONTHS] = {0};
    int rainy, cloudy, sunny;

    readWeather(weather, NO_MONTHS);
    calcTotal(weather, totalByMth, NO_MONTHS, rainy, cloudy, sunny);
    displayTotals(totalByMth, NO_MONTHS, rainy, cloudy, sunny);
    cout << endl;
    displayHighest(totalByMth, NO_MONTHS);
    
    return 0;
}






// Definition of function readWeather.

void readWeather(char arr1[][NO_DAYS], int NO_MONTHS) {
    ifstream infile("RainOrShine.txt");
    assert(infile);
        
    for (int x = 0; x < NO_MONTHS; x++) {
        for (int y = 0; y < NO_DAYS; y++) {
            infile >> arr1[x][y];
        }
    }
    infile.close();
}






// Definition of function calcTotal.

void calcTotal(const char arr1[][NO_DAYS], int arr2[][NO_TYPES], int NO_MONTHS,
               int &rainyTot, int &cloudyTot, int &sunnyTot) {
    int rainyMth, cloudyMth, sunnyMth;
    
    rainyTot = cloudyTot = sunnyTot = 0;

    for (int x = 0; x < NO_MONTHS; x++) {
        rainyMth = cloudyMth = sunnyMth = 0;
        
        for (int y = 0; y < NO_DAYS; y++) {
            if (arr1[x][y] == 'R') {
                rainyMth++;
                rainyTot++;
            } else if (arr1[x][y] == 'C') {
                cloudyMth++;
                cloudyTot++;
            } else {
                sunnyMth++;
                sunnyTot++;
            }
        }
        arr2[x][0] = rainyMth;
        arr2[x][1] = cloudyMth;
        arr2[x][2] = sunnyMth;
        
    }
}






// Definition of function displayTotals.

void displayTotals(const int arr2[][NO_TYPES], int NO_MONTHS, int rainyTot, int cloudyTot,
                   int sunnyTot) {
    cout << "TOTAL RAINY, CLOUDY & SUNNY DAYS PER MONTH" << endl;
    cout << "------------------------------------------\n" << endl;
    cout << "                 Rainy    Cloudy     Sunny" << endl;
    
    for (int x = 0; x < NO_MONTHS; x++) {
        cout << left << setw(12) << MONTHS[x];

        for (int y = 0; y < NO_TYPES; y++) {
            cout << right << setw(10) << arr2[x][y];
        }
        
        cout << endl;
    }
    
    cout << left << setw(12) << "Total";
    cout << right << setw(10) << rainyTot;
    cout << right << setw(10) << cloudyTot;
    cout << right << setw(10) << sunnyTot << endl;
}






// Definition of function displayHighest.

void displayHighest(const int arr2[][NO_TYPES], int NO_MONTHS) {
    int highest, month = 0;
    
    highest = arr2[0][0];
    
    for (int x = 1; x < NO_MONTHS; x++) {
        if (arr2[x][0] > highest) {
            highest = arr2[x][0];
            month = x;
        }
    }
    
    cout << MONTHS[month] << " had the most rainy days at " << highest << " days." << endl;
}


/*
 
 TOTAL RAINY, CLOUDY & SUNNY DAYS PER MONTH
 ------------------------------------------

                  Rainy    Cloudy     Sunny
 June                 9         9        12
 July                 2        10        18
 August               2         8        20
 Total               13        27        50

 June had the most rainy days at 9 days.
 Program ended with exit code: 0
 
 */

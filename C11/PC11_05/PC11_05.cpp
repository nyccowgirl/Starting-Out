/*
 WEATHER STATISTICS MODIFICATION
 
 Modify the program in PC 11_04 so it defines an enumerated data type with enumerators for
 the months (JANUARY, FEBRUARY, etc.). The program should use the enumerated type to step
 through the elements of the array.
 
 PC11_05.cpp
 Staring Out/C11
 
 Created by nyccowgirl on 10/11/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <iomanip>
using namespace std;


const int SIZE = 12;
//const string MONTHS[SIZE] = {"January", "February", "March", "April", "May", "June",
//                             "July", "August", "September", "October", "November",
//                             "December"};


struct Weather
{
    double totalRain;
    double highTemp;
    double lowTemp;
    double avgTemp;
};


enum Month { JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER,
             NOVEMBER, DECEMBER };


void getInfo(Weather annual[]);
bool validateInput(const double input, const char type);
void display(const Weather annual[]);
double calcTotal(const Weather annual[], const char type);
double calcAvg(double total);
int highestTemp(const Weather annual[]);
int lowestTemp(const Weather annual[]);
void displayMthName(Month m);


int main(int argc, const char * argv[]) {
    Weather annual[SIZE];
        
    getInfo(annual);
    display(annual);
    return 0;
}






// Definition of function getInfo

void getInfo(Weather annual[]) {
    bool valid;
    char type;
    int month;
    
    for (month = JANUARY; month <= DECEMBER; month = static_cast<Month>(month + 1)) {
        displayMthName(static_cast<Month>(month));
        cout << ":" << endl;
        cout << "----------" << endl;
        
        do {
            cout << "Enter total rainfall (in inches): ";
            cin >> annual[month].totalRain;
            type = 'R';
            valid = validateInput(annual[month].totalRain, type);
        } while (!valid);

        do {
            cout << "Enter high temperature (in Fahrenheit): ";
            cin >> annual[month].highTemp;
            type = 'T';
            valid = validateInput(annual[month].highTemp, type);
        } while (!valid);
        
        do {
            cout << "Enter low temperature (in Fahrenheit): ";
            cin >> annual[month].lowTemp;
            valid = validateInput(annual[month].lowTemp, type);
        } while (!valid);

        annual[month].avgTemp = (annual[month].highTemp + annual[month].lowTemp) / 2;
        cout << endl;
    }
}






// Definition of function validateInput

bool validateInput(const double input, const char type) {
    if (type == 'R' && input < 0) {
        cout << "Rainfall cannot be less than 0." << endl;
        return false;
    }
    
    if (type == 'T' && (input < -100 || input > 140)) {
        cout << "Temperatures should be between -100 and +140 degrees Fahrenheit." << endl;
        return false;
    }
    return true;
}






// Definition of function display

void display(const Weather annual[]) {
    char type;
    double totalRain;
    int highest, lowest;
    
    totalRain = calcTotal(annual, type = 'R');
    highest = highestTemp(annual);
    lowest = lowestTemp(annual);
    cout << fixed << setprecision(2);
    cout << "ANNUAL WEATHER SUMMARY" << endl;
    cout << "----------------------" << endl;
    cout << "Average monthly rainfall (in inches): " << calcAvg(totalRain) << endl;
    cout << "Total rainfall (in inches): " << totalRain << endl;
    cout << "Highest temperature (in Fahrenheit): " << annual[highest].highTemp << " (";
    displayMthName(static_cast<Month>(highest));
    cout << ")" << endl;
    cout << "Lowest temperature (in Fahrenheit): " << annual[lowest].lowTemp << " (";
    displayMthName(static_cast<Month>(lowest));
    cout << ")" << endl;
    cout << "Average monthly temperature (in Fahrenheit): ";
    cout << calcAvg(calcTotal(annual, type = 'T')) << endl;
}






// Definition of function calcTotRain

double calcTotal(const Weather annual[], const char type) {
    double sumRain = 0, sumTemp = 0;
    int month;
    
    for (month = JANUARY; month <= DECEMBER; month = static_cast<Month>(month + 1)) {
        sumRain += annual[month].totalRain;
        sumTemp += (annual[month].highTemp + annual[month].lowTemp);
    }
    
    if (type == 'R') {
        return sumRain;
    } else {
        return sumTemp / 2;
    }
}






// Definition of function calcAvg

double calcAvg(double total) {
    return total / SIZE;
}






// Definition of function highestTemp

int highestTemp(const Weather annual[]) {
//    int index = 0;
    double temp = annual[JANUARY].highTemp;
    int month, index = JANUARY;
        
    for (month = FEBRUARY; month <= DECEMBER; month = static_cast<Month>(month + 1)) {
        if (annual[month].highTemp > temp) {
            temp = annual[month].highTemp;
            index = month;
        }
    }
    return index;
}






// Definition of function lowestTemp

int lowestTemp(const Weather annual[]) {
//    int index = 0;
    double temp = annual[JANUARY].lowTemp;
    int month, index = JANUARY;

        
    for (month = FEBRUARY; month <= DECEMBER; month = static_cast<Month>(month + 1)) {
        if (annual[month].lowTemp < temp) {
            temp = annual[month].lowTemp;
            index = month;
        }
    }
    return index;
}






// Definition of function displayMthName

void displayMthName(Month m) {
    switch(m) {
        case JANUARY :
            cout << "January";
            break;
        case FEBRUARY :
            cout << "February";
            break;
        case MARCH :
            cout << "March";
            break;
        case APRIL :
            cout << "April";
            break;
        case MAY :
            cout << "May";
            break;
        case JUNE :
            cout << "June";
            break;
        case JULY :
            cout << "July";
            break;
        case AUGUST :
            cout << "August";
            break;
        case SEPTEMBER :
            cout << "September";
            break;
        case OCTOBER :
            cout << "October";
            break;
        case NOVEMBER :
            cout << "November";
            break;
        case DECEMBER :
            cout << "December";
    }
}


/*
 
 January:
 ----------
 Enter total rainfall (in inches): 16
 Enter high temperature (in Fahrenheit): 23
 Enter low temperature (in Fahrenheit): -101
 Temperatures should be between -100 and +140 degrees Fahrenheit.
 Enter low temperature (in Fahrenheit): -18

 February:
 ----------
 Enter total rainfall (in inches): 4
 Enter high temperature (in Fahrenheit): 45
 Enter low temperature (in Fahrenheit): 11

 March:
 ----------
 Enter total rainfall (in inches): 22
 Enter high temperature (in Fahrenheit): 56
 Enter low temperature (in Fahrenheit): 34

 April:
 ----------
 Enter total rainfall (in inches): 26
 Enter high temperature (in Fahrenheit): 65
 Enter low temperature (in Fahrenheit): 54

 May:
 ----------
 Enter total rainfall (in inches): 77
 Enter high temperature (in Fahrenheit): 78
 Enter low temperature (in Fahrenheit): 65

 June:
 ----------
 Enter total rainfall (in inches): -2
 Rainfall cannot be less than 0.
 Enter total rainfall (in inches): 0
 Enter high temperature (in Fahrenheit): 83
 Enter low temperature (in Fahrenheit): 70

 July:
 ----------
 Enter total rainfall (in inches): 2
 Enter high temperature (in Fahrenheit): 95
 Enter low temperature (in Fahrenheit): 88

 August:
 ----------
 Enter total rainfall (in inches): 8
 Enter high temperature (in Fahrenheit): 93
 Enter low temperature (in Fahrenheit): 77

 September:
 ----------
 Enter total rainfall (in inches): 10
 Enter high temperature (in Fahrenheit): 78
 Enter low temperature (in Fahrenheit): 64

 October:
 ----------
 Enter total rainfall (in inches): 8
 Enter high temperature (in Fahrenheit): 64
 Enter low temperature (in Fahrenheit): 35

 November:
 ----------
 Enter total rainfall (in inches): 9
 Enter high temperature (in Fahrenheit): 34
 Enter low temperature (in Fahrenheit): 7

 December:
 ----------
 Enter total rainfall (in inches): 3
 Enter high temperature (in Fahrenheit): 95
 Enter low temperature (in Fahrenheit): 2

 ANNUAL WEATHER SUMMARY
 ----------------------
 Average monthly rainfall (in inches): 15.42
 Total rainfall (in inches): 185.00
 Highest temperature (in Fahrenheit): 95.00 (July)
 Lowest temperature (in Fahrenheit): -18.00 (January)
 Average monthly temperature (in Fahrenheit): 54.08
 Program ended with exit code: 0
 
 */

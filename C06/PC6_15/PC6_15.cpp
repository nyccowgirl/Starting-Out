/*
 POPULATION
 
 Program displays size of population for number of years, specified by user input.
 
 PC6_15.cpp
 Starting Out/C06
 
 Created by nyccowgirl on 9/19/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <iomanip>
using namespace std;


int calcPop(int population, double birth, double death);    // Function prototype


int main(int argc, const char * argv[]) {
    int startPop, years;
    double birthRate, deathRate;
    
    do {
        cout << "Enter the starting population: ";
        cin >> startPop;
        
        if (startPop < 2) {
            cout << "Invalid input: population cannot be less than 2." << endl;
        }
        
    } while (startPop < 2);
    
    do {
        cout << "Enter the annual birth rate (e.g., 2 for 2%): ";
        cin >> birthRate;
        birthRate /= 100;
        
        if (birthRate < 0) {
            cout << "Invalid input: birth rate cannot be less than 0." << endl;
        }
    } while (birthRate < 0);
        
    do {
        cout << "Enter the annual death rate (e.g., 2 for 2%): ";
        cin >> deathRate;
        deathRate /= 100;
        
        if (deathRate < 0) {
            cout << "Invalid input: death rate cannot be less than 0." << endl;
        }
    } while (deathRate < 0);
    
    do {
        cout << "Enter the number of years to display: ";
        cin >> years;
        
        if (years < 1) {
            cout << "Invalid input: number of years cannot be less than 1." << endl;
        }
        
    } while (years < 1);
    
    cout << "\nFuture           Projected" << endl;
    cout << " Year            Population" << endl;
    cout << "------          ------------" << endl;
    
    for (int count = 1; count <= years; count++) {
        cout << setw(5) << count;
        startPop = calcPop(startPop, birthRate, deathRate);
        cout << setw(21) << startPop << endl;
    }
    return 0;
}






// Definition of function calcPop. Function passes starting population, annual birth rate
// and annual death rate. It calculates and returns the new population.

int calcPop(int population, double birth, double death) {
    return population * (1 + (birth - death));
}

/*
 
 Enter the starting population: 1
 Invalid input: population cannot be less than 2.
 Enter the starting population: 1000000
 Enter the annual birth rate (e.g., 2 for 2%): -4
 Invalid input: birth rate cannot be less than 0.
 Enter the annual birth rate (e.g., 2 for 2%): 4
 Enter the annual death rate (e.g., 2 for 2%): 2
 Enter the number of years to display: -1
 Invalid input: number of years cannot be less than 1.
 Enter the number of years to display: 10

 Future           Projected
  Year            Population
 ------          ------------
     1              1020000
     2              1040400
     3              1061208
     4              1082432
     5              1104080
     6              1126161
     7              1148684
     8              1171657
     9              1195090
    10              1218991
 Program ended with exit code: 0
 
 */

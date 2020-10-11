/*
 TRANSIENT POPULATION
 
 Program displays size of population for number of years, specified by user input.
 
 PC6_16.cpp
 Starting Out/C6
 
 Created by nyccowgirl on 9/19/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <iomanip>
using namespace std;


int calcPop(int population, double birth, double death, int arrivals, int departures);


int main(int argc, const char * argv[]) {
    int startPop, numYears, ins, outs;
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
        cout << "Enter the annual number of individuals moving into the area: ";
        cin >> ins;
        
        if (ins < 0) {
            cout << "Invalid input: migration in cannot be less than 0." << endl;
        }
        
    } while (ins < 0);
    
    do {
        cout << "Enter the annual number of individuals moving out of the area: ";
        cin >> outs;
        
        if (outs < 0) {
            cout << "Invalid input: migration out cannot be less than 0." << endl;
        }
        
    } while (outs < 0);

    do {
        cout << "Enter the number of years to display: ";
        cin >> numYears;
        
        if (numYears < 1) {
            cout << "Invalid input: number of years cannot be less than 1." << endl;
        }
        
    } while (numYears < 1);
    
    cout << "\nFuture           Projected" << endl;
    cout << " Year            Population" << endl;
    cout << "------          ------------" << endl;
    
    for (int count = 1; count <= numYears; count++) {
        cout << setw(5) << count;
        startPop = calcPop(startPop, birthRate, deathRate, ins, outs);
        cout << setw(21) << startPop << endl;
    }
    return 0;
}






// Definition of function calcPop. Function passes starting population, annual birth rate,
// annual death rate and migration (individuals moving in and out of the area. It
// calculates and returns the new population.

int calcPop(int population, double birth, double death, int arrivals, int departures) {
    return (population * (1 + (birth - death))) + arrivals - departures;
}

/*
 
 Enter the starting population: 1000000
 Enter the annual birth rate (e.g., 2 for 2%): 4
 Enter the annual death rate (e.g., 2 for 2%): 2
 Enter the annual number of individuals moving into the area: 50000
 Enter the annual number of individuals moving out of the area: 75000
 Enter the number of years to display: 10

 Future           Projected
  Year            Population
 ------          ------------
     1               995000
     2               989900
     3               984698
     4               979391
     5               973978
     6               968457
     7               962826
     8               957082
     9               951223
    10               945247
 Program ended with exit code: 0
 
 */

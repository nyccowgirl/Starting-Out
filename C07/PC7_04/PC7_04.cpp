/*
 MONKEY BUSINESS
 
 Program lets a local zoo track how many pounds of food each of its three monkeys eat each
 day in a typical week.
 
 PC7_04.cpp
 Starting Out/C07
 
 Created by nyccowgirl on 9/23/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <iomanip>
using namespace std;


const int NO_DAYS = 7;
const int NO_MONK = 3;
const string DAYS[NO_DAYS] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday",
                              "Friday", "Saturday"};
const string MONKEYS[NO_MONK] = {"Monkey See", "Monkey Do", "Monkey Around"};


void getFood(int arr1[][NO_DAYS], int size);
int calcTotal(const int arr1[][NO_DAYS], int arr2[], int size);
void calcAvg(int total);
void displayHighest(const int arr2[], int size);
void displayLowest(const int arr2[], int size);


int main(int argc, const char * argv[]) {
    int food[NO_MONK][NO_DAYS];
    int totalByMonk[NO_MONK];
    
    getFood(food, NO_MONK);
    cout << endl;
    calcAvg(calcTotal(food, totalByMonk, NO_MONK));
    displayHighest(totalByMonk, NO_MONK);
    displayLowest(totalByMonk, NO_MONK);
    
    return 0;
}






// Definition of function getFood.

void getFood(int arr1[][NO_DAYS], int size) {
    cout << "Enter the amount of food (in pounds):" << endl;
    
    for (int x = 0; x < size; x++) {
        cout << "\n" << MONKEYS[x] << endl;
        cout << "-------------" << endl;
        
        for (int y = 0; y < NO_DAYS; y++) {
            do {
                cout << DAYS[y] << ": ";
                cin >> arr1[x][y];
                
                if (!(arr1[x][y] >= 0)) {
                    cout << "Invalid input: Pounds eaten cannot be less than 0." << endl;
                }
            } while (!(arr1[x][y] >= 0));
        }
    }
}






// Definition of function calcTotal.

int calcTotal(const int arr1[][NO_DAYS], int arr2[], int size) {
    int total = 0, totMonkey;
    
    for (int x = 0; x < size; x++) {
        totMonkey = 0;
        for (int y = 0; y < NO_DAYS; y++) {
            total += arr1[x][y];
            totMonkey += arr1[x][y];
        }
        arr2[x] = totMonkey;
    }
    return total;
}






// Definition of function calcAvg.

void calcAvg(int total) {
    cout << fixed << setprecision(2);
    cout << "The average amount of food consumed per day is ";
    cout << (total / NO_DAYS) << " pounds." << endl;
}






// Definition of function displayHighest.

void displayHighest(const int arr2[], int size) {
    int highest, monkey = 0;
    
    highest = arr2[0];
    
    for (int x = 1; x < size; x++) {
        if (arr2[x] > highest) {
            highest = arr2[x];
            monkey = x;
        }
    }
    
    cout << MONKEYS[monkey] << " ate the most food this week at ";
    cout << highest << " pounds." << endl;
}






// Definition of function displayLowest.

void displayLowest(const int arr2[], int size) {
    int lowest, monkey = 0;
    
    lowest = arr2[0];
    
    for (int x = 1; x < size; x++) {
        if (arr2[x] < lowest) {
            lowest = arr2[x];
            monkey = x;
        }
    }
    
    cout << MONKEYS[monkey] << " ate the least food this week at ";
    cout << lowest << " pounds." << endl;
}


/*
 
 Enter the amount of food (in pounds):

 Monkey See
 -------------
 Sunday: 1
 Monday: 1
 Tuesday: 1
 Wednesday: 1
 Thursday: 1
 Friday: 1
 Saturday: 1

 Monkey Do
 -------------
 Sunday: 2
 Monday: 2
 Tuesday: 2
 Wednesday: 2
 Thursday: 2
 Friday: 2
 Saturday: 2

 Monkey Around
 -------------
 Sunday: 3
 Monday: 3
 Tuesday: 3
 Wednesday: 3
 Thursday: 3
 Friday: 3
 Saturday: 3
 
 The average amount of food consumed per day is 6 pounds.
 Monkey Around ate the most food this week at 21 pounds.
 Monkey See ate the least food this week at 7 pounds.
 Program ended with exit code: 0
 
 */

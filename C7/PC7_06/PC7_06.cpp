/*
 NUMBER ANALYSIS PROGRAM
 
 Program asks user for file name with series of numbers on separate lines. After reading
 the contents of the file, the program displays lowest, highest, total and average of the
 numbers.
 
 PC7_06.cpp
 Starting Out/C7
 
 Created by nyccowgirl on 9/23/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <cassert>
#include <vector>
using namespace std;


void readFile(vector<double> &arr);
void displayLowest(const vector<double> arr);
void displayHighest(const vector<double> arr);
double calcTotal(const vector<double> arr);
void calcAvg(const vector<double> arr, double total);


int main(int argc, const char * argv[]) {
    vector<double> num;

    readFile(num);
    displayLowest(num);
    displayHighest(num);
    calcAvg(num, calcTotal(num));
    
    return 0;
}






// Definition of function readFile.

void readFile(vector<double> &arr) {
    ifstream infile;
    assert(infile);

    double number;
    string fileName;
    
    cout << "Enter the file name: ";
    cin >> fileName;
    
    infile.open(fileName.c_str());
    
    do {
        infile >> number;
        arr.push_back(number);
    } while (infile);
    
    infile.close();
}






// Definition of function displayLowest.

void displayLowest(vector<double> arr) {
    double lowest;
    
    lowest = arr[0];
    
    for (int x = 1; x < arr.size(); x++) {
        if (arr[x] < lowest) {
            lowest = arr[x];
        }
    }
    
    cout << "The lowest number is: " << lowest << endl;
}






// Definition of function displayHighest.

void displayHighest(vector<double> arr) {
    double highest;
    
    highest = arr[0];
    
    for (int x = 1; x < arr.size(); x++) {
        if (arr[x] > highest) {
            highest = arr[x];
        }
    }
    
    cout << "The highest number is: " << highest << endl;
}





// Definition of function calcTotal.

double calcTotal(const vector<double> arr) {
    double total = 0;
    
    for (int x = 0; x < arr.size(); x++) {
        total += arr[x];
    }
    
    cout << "The total of the numbers are: " << total << endl;
    return total;
}






// Definition of function calcAvg.

void calcAvg(vector<double> arr, double total) {
    cout << fixed << setprecision(2);
    cout << "The average of the numbers is: ";
    cout << fixed << setprecision(2) << (total / arr.size()) << endl;
}


/*
 
 Enter the file name: numbers.txt
 The lowest number is: 8
 The highest number is: 89
 The total of the numbers are: 535
 The average of the numbers is: 44.58
 Program ended with exit code: 0
 
 */

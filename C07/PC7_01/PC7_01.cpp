/*
 LARGEST/SMALLEST ARRAY VALUES
 
 Program allows user to input 10 values and displays the largest and smallest values stored
 in the array.
 
 PC7_01.cpp
 Starting Out/C07
 
 Created by nyccowgirl on 9/22/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;


void getValues(int arr[], int size);
void displayLargest(const int arr[], int size);
void displaySmallest(const int arr[], int size);


int main(int argc, const char * argv[]) {
    const int SIZE = 10;
    int values[SIZE];
    
    getValues(values, SIZE);
    displayLargest(values, SIZE);
    displaySmallest(values, SIZE);
    
    return 0;
}






// Definition of function getValues.

void getValues(int arr[], int size) {
    cout << "Enter 10 values:" << endl;
    
    for (int x = 0; x < size; x++) {
        cout << "#" << (x + 1) << " ";
        cin >> arr[x];
    }
}






// Definition of function displayLargest.

void displayLargest(const int arr[], int size) {
    int largest;
    
    largest = arr[0];
    
    for (int x = 1; x < size; x++) {
        if (arr[x] > largest) {
            largest = arr[x];
        }
    }
    
    cout << "The largest value that was inputted is " << largest << "." << endl;
}






// Definition of function displaySmallest.

void displaySmallest(const int arr[], int size) {
    int smallest;
    
    smallest = arr[0];
    
    for (int x = 1; x < size; x++) {
        if (arr[x] < smallest) {
            smallest = arr[x];
        }
    }
    
    cout << "The smallest value that was inputted is " << smallest << "." << endl;
}


/*
 
 Enter 10 values:
 #1 10
 #2 9
 #3 8
 #4 7
 #5 6
 #6 5
 #7 4
 #8 3
 #9 2
 #10 1
 The largest value that was inputted is 10.
 The smallest value that was inputted is 1.
 Program ended with exit code: 0
 
 */

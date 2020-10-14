/*
 Program illustrates array and functions.
 
 C7_18.cpp
 Starting Out/C07
 
 Created by nyccowgirl on 9/21/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;


double avgArray(const int arr[], int size);


int main(int argc, const char * argv[]) {
    const int SIZE = 10;
    int userNums[SIZE];
    
    cout << "Enter 10 numbers: " << endl;
    
    for (int count = 0; count < SIZE; count++) {
        cout << "#" << (count + 1) << " ";
        cin >> userNums[count];
    }
    
    cout << "The average of those numbers is ";
    cout << avgArray(userNums, SIZE) << "." << endl;
    return 0;
}






// Definition of function avgArray.

double avgArray(const int arr[], int size) {
    double total = 0;
    
    for (int count = 0; count < size; count++) {
        total += arr[count];
    }
    
    return total / size;
}


/*
 
 Enter 10 numbers:
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
 The average of those numbers is 5.5.
 Program ended with exit code: 0
 
 */

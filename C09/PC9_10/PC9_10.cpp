/*
 REVERSE ARRAY

 Program creates a copy of the reversal of an array, using return pointer.
 
 PC9_10.cpp
 Starting Out/C09
 
 Created by nyccowgirl on 10/5/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;


void getData(int *array, int size);
int *reverseArray(int *array, int size);
void printArray(const int *array, int size);


int main(int argc, const char * argv[]) {
    int size;
    int *array, *reverse;
    
    cout << "How many numbers do you want to enter? ";
    cin >> size;
    
    array = new int[size];
    getData(array, size);
    reverse = reverseArray(array, size);
    
    cout << "The original array is: ";
    printArray(array, size);
    cout << "The array reversed is: ";
    printArray(reverse, size);
    
    delete [] array;
    delete [] reverse;
    array = nullptr;
    reverse = nullptr;
    return 0;
}






// Definition of function getData.

void getData(int *array, int size) {
    for (int x = 0; x < size; x++) {
        cout << "Enter #" << x + 1 << ": ";
        cin >> *(array + x);
    }
}








// Definition of function reverseArray.

int *reverseArray(int *array, int size) {
    int *reverse;
    
    reverse = new int[size];

    for (int x = 0; x < size; x++) {
        *(reverse + x) = *(array + size - x - 1);
    }
    return reverse;
}






// Definition of function printArray.

void printArray(const int *array, int size) {
    for (int x = 0; x < size; x++) {
        cout << *(array + x) << " ";
    }
    cout << endl;
}



/*
 
 How many numbers do you want to enter? 7
 Enter #1: 293
 Enter #2: 13
 Enter #3: 293
 Enter #4: 227
 Enter #5: 32
 Enter #6: 124
 Enter #7: 2
 The original array is: 293 13 293 227 32 124 2
 The array reversed is: 2 124 32 227 293 13 293
 Program ended with exit code: 0
 
 */

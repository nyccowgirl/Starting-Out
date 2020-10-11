/*
 ARRAY EXPANDER

 Program creates a copy of an array and doubles the size, using return pointer.
 
 PC9_11.cpp
 Starting Out/C9
 
 Created by nyccowgirl on 10/5/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;


void getData(int *array, int size);
int *doubleArray(int *array, int size);
void printArray(const int *array, int size);


int main(int argc, const char * argv[]) {
    int size;
    int *array, *doubleArr;
    
    cout << "How many numbers do you want to enter? ";
    cin >> size;
    
    array = new int[size];
    getData(array, size);
    doubleArr = doubleArray(array, size);
    
    cout << "The original array is: ";
    printArray(array, size);
    cout << "The array doubled is: ";
    printArray(doubleArr, size * 2);
    
    delete [] array;
    delete [] doubleArr;
    array = nullptr;
    doubleArr = nullptr;
    return 0;
}






// Definition of function getData.

void getData(int *array, int size) {
    for (int x = 0; x < size; x++) {
        cout << "Enter #" << x + 1 << ": ";
        cin >> *(array + x);
    }
}








// Definition of function doubleArray.

int *doubleArray(int *array, int size) {
    int *doubleArr;
    
    doubleArr = new int[size * 2];

    for (int x = 0; x < (size * 2); x++) {
        if (x < size) {
            *(doubleArr + x) = *(array + x);
        } else {
            *(doubleArr + x) = 0;
        }
    }
    return doubleArr;
}






// Definition of function printArray.

void printArray(const int *array, int size) {
    for (int x = 0; x < size; x++) {
        cout << *(array + x) << " ";
    }
    cout << endl;
}



/*
 
 How many numbers do you want to enter? 5
 Enter #1: 8
 Enter #2: 7
 Enter #3: 6
 Enter #4: 5
 Enter #5: 4
 The original array is: 8 7 6 5 4
 The array doubled is: 8 7 6 5 4 0 0 0 0 0
 Program ended with exit code: 0
 
 */

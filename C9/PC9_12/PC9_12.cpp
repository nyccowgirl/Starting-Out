/*
 ELEMENT SHIFTER

 Program creates a copy of an array and shifts the elements to the right, using return
 pointer.
 
 PC9_12.cpp
 Starting Out/C9
 
 Created by nyccowgirl on 10/5/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;


void getData(int *array, int size);
int *shiftArray(int *array, int size);
void printArray(const int *array, int size);


int main(int argc, const char * argv[]) {
    int size;
    int *array, *newArr;
    
    cout << "How many numbers do you want to enter? ";
    cin >> size;
    
    array = new int[size];
    getData(array, size);
    newArr = shiftArray(array, size);
    
    cout << "The original array is: ";
    printArray(array, size);
    cout << "The array doubled is: ";
    printArray(newArr, size + 1);
    
    delete [] array;
    delete [] newArr;
    array = nullptr;
    newArr = nullptr;
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

int *shiftArray(int *array, int size) {
    int *shiftArr;
    
    shiftArr = new int[size + 1];
    
    *(shiftArr) = 0;

    for (int x = 1; x <= (size); x++) {
        *(shiftArr + x) = *(array + x - 1);
    }
    return shiftArr;
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
 Enter #1: 1
 Enter #2: 2
 Enter #3: 3
 Enter #4: 4
 Enter #5: 5
 The original array is: 1 2 3 4 5
 The array doubled is: 0 1 2 3 4 5
 Program ended with exit code: 0
 
 */

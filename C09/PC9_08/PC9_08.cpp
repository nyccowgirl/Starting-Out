/*
 MODE FUNCTION

 Program determines mode of an array, using pointer notation.
 
 PC9_08.cpp
 Starting Out/C09
 
 Created by nyccowgirl on 10/4/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;


void getData(int *array, int size);
int getMode(int *array, int size);
void sort(int *array, int size);


int main(int argc, const char * argv[]) {
    int size;
    int *array;
    
    cout << "How many numbers do you want to enter? ";
    cin >> size;
    
    array = new int[size];
    getData(array, size);
    
    cout << "\nThe mode is " << getMode(array, size) << "." << endl;
    
    delete [] array;
    array = nullptr;
    return 0;
}






// Definition of function getData.

void getData(int *array, int size) {
    for (int x = 0; x < size; x++) {
        cout << "Enter #" << x + 1 << ": ";
        cin >> *(array + x);
    }
}








// Definition of function getMode.

int getMode(int *array, int size) {
    int counter, max, mode;
    
    sort(array, size);
    counter = max = 1;
    mode = *(array);

    for (int x = 1; x < size; x++) {
        
        if (*(array + x) == *(array + x - 1)) {
            counter++;
        } else {
            counter = 1;
        }
        
        if (counter > max) {
            mode = *(array + x);
            max = counter;
        }
    }
    
    if (max < 2) {
        return -1;
    } else {
        return mode;
    }
}






// Definition of function sort.

void sort(int *array, int size) {
    int minIdx, min;
    
    for (int x = 0; x < (size - 1); x++) {
        minIdx = x;
        min = *(array + x);
        
        for (int y = (x + 1); y < size; y++) {
            if (*(array + y) < min) {
                min = *(array + y);
                minIdx = y;
            }
        }
        
        *(array + minIdx) = *(array + x);
        *(array + x) = min;
    }
}



/*
 
 How many numbers do you want to enter? 5
 Enter #1: 1
 Enter #2: 2
 Enter #3: 3
 Enter #4: 4
 Enter #5: 5

 The mode is -1.
 Program ended with exit code: 0
 
 How many numbers do you want to enter? 10
 Enter #1: 8
 Enter #2: 2
 Enter #3: 3
 Enter #4: 5
 Enter #5: 8
 Enter #6: 2
 Enter #7: 4
 Enter #8: 8
 Enter #9: 9
 Enter #10: 3

 The mode is 8.
 Program ended with exit code: 0
 
 */

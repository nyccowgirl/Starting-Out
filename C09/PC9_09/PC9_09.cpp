/*
 MEDIAN FUNCTION

 Program determines median of an array, using pointer notation.
 
 PC9_09.cpp
 Starting Out/C09
 
 Created by nyccowgirl on 10/5/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <iomanip>
using namespace std;


void getData(int *array, int size);
double getMedian(int *array, int size);
void sort(int *array, int size);


int main(int argc, const char * argv[]) {
    int size;
    int *array;
    
    cout << "How many numbers do you want to enter? ";
    cin >> size;
    
    array = new int[size];
    getData(array, size);
    
    cout << fixed << showpoint << setprecision(2);
    cout << "\nThe median is " << getMedian(array, size) << "." << endl;
    
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








// Definition of function getMedian.

double getMedian(int *array, int size) {
    int index;
    
    sort(array, size);
    index = size / 2;
    
    if ((size % 2) != 0) {
        return *(array + index);
    } else {
        return (*(array + index) + *(array + index - 1)) / 2.0;
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

 The median is 3.00.
 Program ended with exit code: 0
 
 How many numbers do you want to enter? 10
 Enter #1: 9
 Enter #2: 8
 Enter #3: 1
 Enter #4: 2
 Enter #5: 3
 Enter #6: 4
 Enter #7: 5
 Enter #8: 6
 Enter #9: 7
 Enter #10: 10

 The median is 5.50.
 Program ended with exit code: 0
 
 */

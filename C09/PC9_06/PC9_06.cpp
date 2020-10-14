/*
 CASE STUDY MODIFICATION #1

 Modify Program 9-17 so it can be used with any set of donations, with user inputting the
 values.
 
 PC9_06.cpp
 Starting Out/C09
 
 Created by nyccowgirl on 10/4/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;


void arrSelectSort(int *[], int);
void showArray(const int [], int);
void showArrPtr(int *[], int);


int main(int argc, const char * argv[]) {
    int num_donations;
    int *donations;
    int **arrPtr;
    
    cout << "How many donations do you wish to process? ";
    cin >> num_donations;
    donations = new int[num_donations];
    arrPtr = new int*[num_donations];
    
    for (int count = 0; count < num_donations; count++) {
        cout << "Enter donation #" << count + 1 << ": ";
        cin >> donations[count];
        arrPtr[count] = &donations[count];
    }
    
    arrSelectSort(arrPtr, num_donations);
    cout << "\nThe donations, sorted in ascending order, are: \n";
    showArrPtr(arrPtr, num_donations);
    cout << "\nThe donations, in their original order, are: \n";
    showArray(donations, num_donations);
    
    delete [] donations;
    delete [] arrPtr;
    donations = nullptr;
    arrPtr = nullptr;
    return 0;
}






// Defition of function arrSelectSort.

void arrSelectSort(int *arr[], int size) {
    int startScan, minIndex;
    int *minElem;
    
    for (startScan = 0; startScan < (size - 1); startScan++) {
        minIndex = startScan;
        minElem = arr[startScan];
        
        for (int index = startScan + 1; index  < size; index++) {
            if (*(arr[index]) < *minElem) {
                minElem = arr[index];
                minIndex = index;
            }
        }
        arr[minIndex] = arr[startScan];
        arr[startScan] = minElem;
    }
}






// Definition of function showArray.

void showArray(const int arr[], int size) {
    for (int count = 0; count < size; count++) {
        cout << arr[count] << " ";
    }
    cout << endl;
}






// Definition of function showArrPtr.

void showArrPtr(int *arr[], int size) {
    for (int count = 0; count < size; count++) {
        cout << *(arr[count]) << " ";
    }
    cout << endl;
}


/*
 
 How many donations do you wish to process? 15
 Enter donation #1: 5
 Enter donation #2: 100
 Enter donation #3: 5
 Enter donation #4: 25
 Enter donation #5: 10
 Enter donation #6: 5
 Enter donation #7: 25
 Enter donation #8: 5
 Enter donation #9: 5
 Enter donation #10: 100
 Enter donation #11: 10
 Enter donation #12: 15
 Enter donation #13: 10
 Enter donation #14: 5
 Enter donation #15: 10

 The donations, sorted in ascending order, are:
 5 5 5 5 5 5 10 10 10 10 15 25 25 100 100

 The donations, in their original order, are:
 5 100 5 25 10 5 25 5 5 100 10 15 10 5 10
 Program ended with exit code: 0
 
 */

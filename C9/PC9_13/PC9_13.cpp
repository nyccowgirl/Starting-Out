/*
 MOVIE STATISTICS

 Program gets statistical data about the number of movies college students see in a month.
 It calculates the average, median and mode from the survey.
 
 PC9_13.cpp
 Starting Out/C9
 
 Created by nyccowgirl on 10/5/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
//#include <iomanip>
using namespace std;


void getData(int *array, int size);
double getAvg(const int *array, int size);
int getMode(const int *array, int size);
double getMedian(const int *array, int size);
void sort(int *array, int size);


int main(int argc, const char * argv[]) {
    int size;
    int *array;
    
    cout << "How many students were surveyed? ";
    cin >> size;
    
    array = new int[size];
    getData(array, size);
    sort(array, size);
    
    cout << "array: ";
    for (int x = 0; x < size; x++) {
        cout << *(array + x) << " ";
    }
    cout << endl;
    
    cout << "\nThe average number of movies watched by each student is ";
    cout << getAvg(array, size) << "." << endl;
    cout << "The median is " << getMedian(array, size) << "." << endl;
    cout << "The mode is " << getMode(array, size) << "." << endl;
    
    delete [] array;
    array = nullptr;
    return 0;
}






// Definition of function getData.

void getData(int *array, int size) {
    for (int x = 0; x < size; x++) {
        do {
            cout << "Enter the number of movies watched for Student #" << x + 1 << ": ";
            cin >> *(array + x);
            
            if (*(array +x) < 0) {
                cout << "Invalid input: number of movies can not be less than 0." << endl;
            }
        } while (*(array + x) < 0);
    }
}






// Definition of function getAvg.

double getAvg(const int *array, int size) {
    double sum = 0;
    
    for (int x = 0; x < size; x++) {
        sum += *(array + x);
    }
    return sum / (size * 1.0);
}






// Definition of function getMedian.

double getMedian(const int *array, int size) {
    int index;
    
    index = size / 2;
    
    if ((size % 2) != 0) {
        return *(array + index);
    } else {
        return (*(array + index) + *(array + index - 1)) / 2.0;
    }
}






// Definition of function getMode.

int getMode(const int *array, int size) {
    int counter, max, mode;
    
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
 
 How many students were surveyed? 6
 Enter the number of movies watched for Student #1: -3
 Invalid input: number of movies can not be less than 0.
 Enter the number of movies watched for Student #1: 3
 Enter the number of movies watched for Student #2: 2
 Enter the number of movies watched for Student #3: 0
 Enter the number of movies watched for Student #4: 1
 Enter the number of movies watched for Student #5: 8
 Enter the number of movies watched for Student #6: 1
 array: 0 1 1 2 3 8

 The average number of movies watched by each student is 2.5.
 The median is 1.5.
 The mode is 1.
 Program ended with exit code: 0
 
 */

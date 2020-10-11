/*
 DROP LOWEST SCORE

 Program illustrates modifies Test Scores #1 and drops the lowest test score, which is not
 included in the average.
 
 PC9_03.cpp
 Starting Out/C9
 
 Created by nyccowgirl on 10/4/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <iomanip>
using namespace std;


void getData(int *scores, int size);
void sortScores(int *scores, int size);
double calcAvg(const int *scores, int size);
void displayData(int *scores, int size);


int main(int argc, const char * argv[]) {
    int numScores;
    int *scores;
    
    cout << "Enter number of scores: ";
    cin >> numScores;
    
    scores = new int[numScores];
    getData(scores, numScores);
    displayData(scores, numScores);
    
    delete [] scores;
    scores = nullptr;
    return 0;
}






// Definition of function getData.

void getData(int *scores, int size) {
    for (int x = 0; x < size; x++) {
        do {
            cout << "Enter score #" << (x + 1) << ": ";
            cin >> *(scores + x);
            
            if (*(scores + x) < 0) {
                cout << "Invalid input: score cannot be less than 0." << endl;
            }
        } while (*(scores + x) < 0);
    }
}






// Definition of function sortScores.

void sortScores(int *scores, int size) {
    int minIdx, minScore;
    
    for (int x = 0; x < (size - 1); x++) {
        minIdx = x;
        minScore = *(scores + x);
        
        for (int y = (x + 1); y < size; y++) {
            if (*(scores + y) < minScore) {
                minScore = *(scores + y);
                minIdx = y;
            }
        }
        *(scores + minIdx) = *(scores + x);
        *(scores + x) = minScore;
    }
}






// Definition of function calcAvg.

double calcAvg(const int *scores, int size) {
    double sum = 0;
    
    for (int x = 1; x < size; x++) {
        sum += *(scores + x);
    }
    
    return sum / ((size - 1) * 1.0);
}





void displayData(int *scores, int size) {
    
    cout << "\nTEST SCORES" << endl;
    cout << "------------------------------------------------------" << endl;
    cout << "Scores in ascending order: ";
    sortScores(scores, size);
    
    for (int x = 1; x < size; x++) {
        cout << *(scores + x) << " ";
    }
    
    cout << fixed << showpoint << setprecision(2);
    cout << "\nAverage score: " << calcAvg(scores, size) << endl;
}



/*
 
 Enter number of scores: 5
 Enter score #1: 88
 Enter score #2: 77
 Enter score #3: 63
 Enter score #4: 99
 Enter score #5: 95

 TEST SCORES
 ------------------------------------------------------
 Scores in ascending order: 77 88 95 99
 Average score: 89.75
 
 */

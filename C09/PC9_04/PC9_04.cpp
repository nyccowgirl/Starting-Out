/*
 TEST SCORES #2

 Program modifies Test Scores #1 to alow user to enter name-score pairs. Name of the student
 should be displayed with the respective test score.
 
 PC9_04.cpp
 Starting Out/C09
 
 Created by nyccowgirl on 10/4/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


void getData(string *names, int *scores, int size);
void sortScores(string *names, int *scores, int size);
double calcAvg(const int *scores, int size);
void displayData(string *names, int *scores, int size);


int main(int argc, const char * argv[]) {
    int numScores;
    string *names;
    int *scores;
    
    cout << "Enter number of scores: ";
    cin >> numScores;
    
    names = new string[numScores];
    scores = new int[numScores];
    
    getData(names, scores, numScores);
    displayData(names, scores, numScores);
    
    delete [] names;
    delete [] scores;
    names = nullptr;
    scores = nullptr;
    return 0;
}






// Definition of function getData.

void getData(string *names, int *scores, int size) {
    for (int x = 0; x < size; x++) {
        cout << "\nStudent #" << (x + 1) << ":" << endl;
        cout << "------------" << endl;
        cin.ignore();
        cout << "Enter name: ";
        
        do {
            getline(cin, *(names + x));
        } while (*(names + x) == "");
        
        do {
            cout << "Enter score: ";
            cin >> *(scores + x);
            
            if (*(scores + x) < 0) {
                cout << "Invalid input: score cannot be less than 0." << endl;
            }
        } while (*(scores + x) < 0);
    }
}






// Definition of function sortScores.

void sortScores(string *names, int *scores, int size) {
    int minIdx, minScore;
    string minName;
    
    for (int x = 0; x < (size - 1); x++) {
        minIdx = x;
        minName = *(names + x);
        minScore = *(scores + x);
        
        for (int y = (x + 1); y < size; y++) {
            if (*(scores + y) < minScore) {
                minName = *(names + y);
                minScore = *(scores + y);
                minIdx = y;
            }
        }
        *(names + minIdx) = *(names + x);
        *(names + x) = minName;
        
        *(scores + minIdx) = *(scores + x);
        *(scores + x) = minScore;
    }
}






// Definition of function calcAvg.

double calcAvg(const int *scores, int size) {
    double sum = 0;
    
    for (int x = 0; x < size; x++) {
        sum += *(scores + x);
    }
    
    return sum / (size * 1.0);
}





void displayData(string *names, int *scores, int size) {
    
    cout << "\nTEST SCORES" << endl;
    cout << "------------------------------------------------------" << endl;
    cout << "Scores in ascending order:" << endl;
    cout << "--------------------------" << endl;
    sortScores(names, scores, size);
    
    for (int x = 0; x < size; x++) {
        cout << *(names + x) << ": " << *(scores + x) << endl;
    }
    
    cout << fixed << showpoint << setprecision(2);
    cout << "\nAverage score: " << calcAvg(scores, size) << endl;
}



/*
 
 Enter number of scores: 5

 Student #1:
 ------------
 Enter name: Sweet Zephyr
 Enter score: -10
 Invalid input: score cannot be less than 0.
 Enter score: 88

 Student #2:
 ------------
 Enter name: Future Flowering
 Enter score: 77

 Student #3:
 ------------
 Enter name: Magic Mike
 Enter score: 63

 Student #4:
 ------------
 Enter name: The Notorious RBG
 Enter score: 99

 Student #5:
 ------------
 Enter name: Cosmic Seahorse
 Enter score: 95

 TEST SCORES
 ------------------------------------------------------
 Scores in ascending order:
 --------------------------
 Magic Mike: 63
 Future Flowering: 77
 Sweet Zephyr: 88
 Cosmic Seahorse: 95
 The Notorious RBG: 99

 Average score: 84.40
 Program ended with exit code: 0
 
 */

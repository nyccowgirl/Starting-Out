/*
 LOWEST SCORE DROP
 
 Program obtains input from user for five scores, drops the lowest score and calculates
 the average of the remaining scores.
 
 PC6_10.cpp
 Starting Out/C6
 
 Created by nyccowgirl on 9/19/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;


void getScore(int &score);                                    // Function prototypes
void calcAverage(int num1, int num2, int num3, int num4, int num5);
int findLowest(int num1, int num2, int num3, int num4, int num5);


int main(int argc, const char * argv[]) {

    int score1, score2, score3, score4, score5;     // Holds five scores from user input
    
    getScore(score1);
    getScore(score2);
    getScore(score3);
    getScore(score4);
    getScore(score5);
    calcAverage(score1, score2, score3, score4, score5);
    return 0;
}






// Definition of function getScore. The functions gets score from user, validates it and
// stores it in a reference parameter variable.

void getScore(int &score) {
    
    do {
        cout << "Enter a test score: ";
        cin >> score;
        
        if (score < 0 || score > 100) {
            cout << "Invalid input: test score should be between 0 and 100." << endl;
        }
        
    } while (score < 0 || score > 100);
}






// Definition of function calcAverage. Function is passed five test scores. It calls
// the function findLowest to drop the lowest score. It calculates and displays the average
// of the four highest test scores.

void calcAverage(int num1, int num2, int num3, int num4, int num5) {
    int lowest, total;                          // Holds lowest test score and sum
    double average;                             // Holds average of four highest scores
    
    lowest = findLowest(num1, num2, num3, num4, num5);
    total = num1 + num2 + num3 + num4 + num5;
    average = (total - lowest) / 4.0;
    
    cout << "The average of the four highest test scores is " << average << "." << endl;
}






// Definition of function findLowest. Function is passed five test scores and returns the
// lowest score.

int findLowest(int num1, int num2, int num3, int num4, int num5) {
    if (num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5) {
        return num1;
    } else if (num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5) {
        return num2;
    } else if (num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5) {
        return num3;
    } else if (num4 < num1 && num4 < num2 && num4 < num3 && num4 < num5) {
        return num4;
    } else {
        return num5;
    }
}


/*
 
 Enter a test score: 77
 Enter a test score: 88
 Enter a test score: 99
 Enter a test score: 111
 Invalid input: test score should be between 0 and 100.
 Enter a test score: 81
 Enter a test score: 66
 The average of the four highest test scores is 86.25.
 Program ended with exit code: 0
 
 */

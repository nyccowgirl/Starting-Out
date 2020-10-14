/*
 STAR SEARCH
 
 Program obtains scores from five judges, drops the highest and lowest scores and averages
 the remainin scores to determine the contestant's overall score
 
 PC6_11.cpp
 Starting Out/C06
 
 Created by nyccowgirl on 9/19/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <iomanip>
using namespace std;


void getJudgeData(double &score);                      // Function prototypes
void calcScore(double num1, double num2, double num3, double num4, double num5);
double findLowest(double num1, double num2, double num3, double num4, double num5);
double findHighest(double num1, double num2, double num3, double num4, double num5);


int main(int argc, const char * argv[]) {

    double score1, score2, score3, score4, score5;     // Holds five scores from user input
    
    getJudgeData(score1);
    getJudgeData(score2);
    getJudgeData(score3);
    getJudgeData(score4);
    getJudgeData(score5);
    calcScore(score1, score2, score3, score4, score5);
    return 0;
}







// Definition of function getJudgeData. The functions gets score from user, validates it and
// stores it in a reference parameter variable.

void getJudgeData(double &score) {
    
    do {
        cout << "Enter a judge's score: ";
        cin >> score;
        
        if (score < 0 || score > 10) {
            cout << "Invalid input: judge's score should be between 0 and 10." << endl;
        }
        
    } while (score < 0 || score > 10);
}






// Definition of function calcScore. Function is passed five judges' scores. It calls
// the function findLowest and findHighest to drop the lowest and highest scores,
// respectively. It calculates and displays the average of the remaining three scores.

void calcScore(double num1, double num2, double num3, double num4, double num5) {
    double lowest, highest, total, average;         // Holds various variables
    
    lowest = findLowest(num1, num2, num3, num4, num5);
    highest = findHighest(num1, num2, num3, num4, num5);
    total = num1 + num2 + num3 + num4 + num5;
    
    average = (total - lowest - highest) / 3.0;
    
    cout << fixed << setprecision(2);
    cout << "The performer's final score is " << average << "." << endl;
}






// Definition of function findLowest. Function is passed five judges' scores and returns the
// lowest score.

double findLowest(double num1, double num2, double num3, double num4, double num5) {
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






// Definition of function findHighest. Function is passed five judges' scores and returns
// the highest score.

double findHighest(double num1, double num2, double num3, double num4, double num5) {
    if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5) {
        return num1;
    } else if (num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5) {
        return num2;
    } else if (num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5) {
        return num3;
    } else if (num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5) {
        return num4;
    } else {
        return num5;
    }
}


/*
 
 Enter a judge's score: 9.6
 Enter a judge's score: 9.2
 Enter a judge's score: 8.8
 Enter a judge's score: 11
 Invalid input: judge's score should be between 0 and 10.
 Enter a judge's score: 10
 Enter a judge's score: 7.2
 The performer's final score is 9.20.
 Program ended with exit code: 0
 
 */

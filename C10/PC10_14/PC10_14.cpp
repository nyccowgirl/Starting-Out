/*
 WORD SEPARATOR
 
 Write a program that accepts as input a sentence in which all of the words are run
 together, but the first character of each word is uppercase. Covert the sentence to a
 string in which the words are  separated by spaces and only the first word starts with an
 uppercase letter. For example the string "StopAndSmellTheRoses." would bbe converted to
 "Stop and semll the roses."
 
 PC10_14.cpp
 Starting Out/C10
 
 Created by nyccowgirl on 10/9/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <cctype>
using namespace std;


const int SIZE = 50;


int main(int argc, const char * argv[]) {
    char runon[SIZE], buffer[SIZE];
    int index1 = 0, index2 = 0;

    cout << "Enter a sentence where the words are run together," << endl;
    cout << "with an uppercase for the first letter of each new word: ";
    cin.getline(runon, SIZE);
    
    while (runon[index1] != '\0') {
        if (index1 == 0) {
            buffer[index2] = toupper(runon[index1]);
            index2++;
        } else if (isalpha(runon[index1]) && (runon[index1] == toupper(runon[index1]))){
            buffer[index2] = ' ';
            buffer[index2 + 1] = tolower(runon[index1]);
            index2 += 2;
        } else {
            buffer[index2] = runon[index1];
            index2++;
        }
        index1++;
    }

    cout << "The converted sentence is: " << buffer << endl;
    return 0;
}


/*
 
 Enter a sentence where the words are run together,
 with an uppercase for the first letter of each new word: StopAndSmellTheRoses.
 The converted sentence is: Stop and smell the roses.
 Program ended with exit code: 0
 
 */

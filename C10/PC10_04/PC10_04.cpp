/*
 AVERAGE NUMBER OF LETTERS
 
 Modify the program in PC10_03 so it also displays the average numbber of letters in each
 word.
 
 PC10_04.cpp
 Starting Out/C10
 
 Created by nyccowgirl on 10/6/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <cctype>
#include <string>
using namespace std;


const int SIZE = 20;


int countWords(const char *str);
int countWords(const string strObj);
double avgLetters(const char *str, int size);
double avgLetters(const string strObj, int size);


int main(int argc, const char * argv[]) {
    int words;
    double avg;
    char str[SIZE];
    string strObj;
    
    cout << "Enter a string: ";
    getline(cin, strObj, '\n');
    strncpy(str, strObj.c_str(), SIZE);
    
    if (strObj.length() < SIZE) {
        words = countWords(str);
        avg = avgLetters(str, words);
    } else {
        words = countWords(strObj);
        avg = avgLetters(strObj, words);
    }
    
    cout << "Total number of words in the string: " << words << endl;
    cout << "Average number of letters per word: " << avg << endl;
    return 0;
}






// Definition of function countWords for character array

int countWords(const char *str) {
    int count = 1;
    
    while (*str != '\0') {
        if (*str == ' ') {
            count++;
        }
        str++;
    }
    return count;
}






// Definition of function countWords for string class object

int countWords(const string strObj) {
    int count = 1, index = 0;
    
    while (strObj[index] != '\0') {
        if (strObj[index] == ' ') {
            count++;
        }
        index++;
    }
    return count;
}





// Definition of function avgLetters for character array

double avgLetters(const char *str, int size) {
    int count = 0;
    
    while (*str != '\0') {
        if (isalpha(*str)) {
            count++;
        }
        str++;
    }
    return count / (size * 1.0);
}






// Definition of function avgLetters for string class object

double avgLetters(const string strObj, int size) {
    int count = 0, index = 0;
    
    while (strObj[index] != '\0') {
        if (isalpha(strObj[index])) {
            count++;
        }
        index++;
    }
    return count / (size * 1.0);
}



/*
 
 Enter a string: This is a test
 Total number of words in the string: 4
 Average number of letters per word: 2.75
 Program ended with exit code: 0
 
 Enter a string: This took way longer than it should have
 Total number of words in the string: 8
 Average number of letters per word: 4.125
 Program ended with exit code: 0
 
 */

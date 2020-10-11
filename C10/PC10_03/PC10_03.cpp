/*
 WORD COUNTER
 
 Write a function that accepts a pointer to a C-string as an argument and returns the number
 of words contained in the string. For instance, if the string argument is "Four score and
 seven years ago" the function should return the number 6. Demonstrate the function in a
 program that asks the user to input a string and then passes it to the function. The number
 of words in the string should be displayed on the screen.
 
 Option Exercise: Write an overloaded version of  this function that accepts a string class
 object as its argument.
 
 PC10_03.cpp
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


int main(int argc, const char * argv[]) {
    char str[SIZE];
    string strObj;
    
    cout << "Enter a string: ";
    getline(cin, strObj, '\n');
    strncpy(str, strObj.c_str(), SIZE);
    
    cout << "Total number of words in the string: ";
    
    if (strObj.length() < SIZE) {
        cout << countWords(str) << endl;
    } else {
        cout << countWords(strObj) << endl;
    }
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



/*
 
 Enter a string: This is a test
 Total number of words in the string: 4
 Program ended with exit code: 0
 
 Enter a string: This took way longer than it should have
 Total number of words in the string: 8
 Program ended with exit code: 0
 
 */

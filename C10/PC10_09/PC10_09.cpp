/*
 MOST FREQUENT CHARACTER
 
 Write a function that accepts either a pointer to a C-string, or a string object, as its
 argument. The function should return the character that appears most frequently in the
 string. Demonstrate the function in a complete program.
 
 PC10_09.cpp
 Starting Out/C10
 
 Created by nyccowgirl on 10/7/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <cctype>
#include <string>
using namespace std;


char freqChar(char *str);
char freqChar(string &strObj);


const int SIZE = 20;


int main(int argc, const char * argv[]) {
    char str[SIZE];
    string strObj;
    
    cout << "Enter a string: ";
    getline(cin, strObj, '\n');
    strncpy(str, strObj.c_str(), SIZE);
    
    cout << "The most frequent character is: ";
    
    if (strObj.length() < SIZE) {
        cout << freqChar(str) << endl;
    } else {
        cout << freqChar(strObj) << endl;
    }
    
    return 0;
}






// Definition of function freqChar for character array

char freqChar(char *str) {
    char character = *str;
    int max = 0, ascii = 256;
    int count[ascii];
    
    while (*str != '\0') {
        count[*str]++;
        
        if (max < count[*str]) {
            max = count[*str];
            character = *str;
        }
        str++;
    }
    return character;
}






// Definition of function freqChar for string class object

char freqChar(string &strObj) {
    char character = strObj[0];
    int max = 0, index = 0, ascii = 256;
    int count[ascii];
    
    
    while (strObj[index] != '\0') {
        count[strObj[index]]++;
        
        if (max < count[strObj[index]]) {
            max = count[strObj[index]];
            character = strObj[index];
        }
        index++;
    }
    return character;
}



/*
 
 Enter a string: supercalifragilisticexpialidocious
 The most frequent character is: i
 Program ended with exit code: 0
 
 */

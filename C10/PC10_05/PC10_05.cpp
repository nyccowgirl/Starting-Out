/*
 SENTENCE CAPITALIZER
 
 Write a function that accepts a pointer to a C-string as an argument and capitalizes the
 first character of each sentence in the string. For instance, if the string argument is
 "hello, my name is Joe. what is your name?" the function should manipulate the string so
 it contains "Hello. My name is Joe. What is your name?" Demonstrate the function in a
 program that asks the user to input a string and then passes it to the function. The
 modified string should be displayed on the screen.
 
 Option Exercise: Write an overloaded version of  this function that accepts a string class
 object as its argument.
 
 PC10_05.cpp
 Starting Out/C10
 
 Created by nyccowgirl on 10/6/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <cctype>
#include <string>
using namespace std;


const int SIZE = 20;


void capFirst(char *str);
void capFirst(string &strObj);


int main(int argc, const char * argv[]) {
    char str[SIZE];
    string strObj;
    
    cout << "Enter a string: ";
    getline(cin, strObj, '\n');
    strncpy(str, strObj.c_str(), SIZE);
    
    cout << "The modified string: ";
    
    if (strObj.length() < SIZE) {
        capFirst(str);
        cout << str << endl;
    } else {
        capFirst(strObj);
        cout << strObj << endl;
    }
    
    return 0;
}






// Definition of function capFirst for character array

void capFirst(char *str) {
    bool convert = false;
    
    *str = toupper(str[0]);
    str++;
    
    while (*str != '\0') {
        if (*str == '.' || *str == '!' || *str == '?') {
            convert = true;
        } else if (convert == true && isalpha(*str)) {
            *str = toupper(*str);
            convert = false;
        }
        str++;
    }
}






// Definition of function capFirst for string class object

void capFirst(string &strObj) {
    int index = 0;
    bool convert = false;

    strObj[index] = toupper(strObj[index]);
    index++;
    
    while (strObj[index] != '\0') {
        if (strObj[index] == '.' || strObj[index] == '!' || strObj[index] == '?') {
            convert = true;
        } else if (convert == true && isalpha(strObj[index])) {
            strObj[index] = toupper(strObj[index]);
            convert = false;
        }
        index++;
    }
}



/*
 
 Enter a string: hi. no? yes!
 The modified string: Hi. No? Yes!
 Program ended with exit code: 0
 
 Enter a string: string objects need to be passed in as? reference variables. of course!
 The modified string: String objects need to be passed in as? Reference variables. Of course!
 Program ended with exit code: 0
 
 */

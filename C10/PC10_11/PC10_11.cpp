/*
 CASE MANIPULATOR
 
 Write a program with three functions: upper, lower, and reverse. The upper function should
 accept a pointer to a C-string as an argument. It should step through each character in the
 string, converting it to uppercase. The lower function, too, should accept a pointer to a
 C-string as an argument. It should step through each character in the string, converting
 it to lowercase. Like upper and lower, reverse should also accept a pointer to a string.
 As it steps through the string, it should test each character to determine whether it is
 upper- or lowercase. If a character is uppercase, it should be converted to lowercase.
 Likewise, if a character is lowercase, it should be converted to uppercase.
 
 PC10_11.cpp
 Starting Out/C10
 
 Created by nyccowgirl on 10/9/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <cctype>
using namespace std;


const int SIZE = 20;


void reverse(char *str);
void lower(char *str);
void upper(char *str);


int main(int argc, const char * argv[]) {
    char str[SIZE];
    
    cout << "Enter a string: ";
    cin.getline(str, SIZE);
    
    reverse(str);
    cout << "The string in reversed cases: " << str << endl;
    
    lower(str);
    cout << "The string in lower case: " << str << endl;
    
    upper(str);
    cout << "The string in upper case: " << str << endl;
    return 0;
}






// Definition of function reverse

void reverse(char *str) {
    while (*str != '\0') {
        if (*str == tolower(*str)) {
            *str = toupper(*str);
        } else {
            *str = tolower(*str);
        }
        str++;
    }
}






// Definition of function lower

void lower(char *str) {
    while (*str != '\0') {
        *str = tolower(*str);
        str++;
    }
}






// Definition of function upper

void upper(char *str) {
    while (*str != '\0') {
        *str = toupper(*str);
        str++;
    }
}


/*
 
 Enter a string: Hello World!
 The string in reversed cases: hELLO wORLD!
 The string in lower case: hello world!
 The string in upper case: HELLO WORLD!
 Program ended with exit code: 0
 
 */

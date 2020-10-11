/*
 BACKWARD STRING
 
 Write a function that accepts a pointer to a C-string as an argument and displays its
 contents backwards. For instance, if the string argument is "Gravity" the function should
 display "ytivarG". Demonstrate the function in a program that asks the user to input a
 string and then passes it to the function.
 
 PC10_02.cpp
 Starting Out/C10
 
 Created by nyccowgirl on 10/6/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <cctype>
using namespace std;


const int SIZE = 20;


void reverse(char *str);


int main(int argc, const char * argv[]) {
    char str[SIZE];
    
    cout << "Enter a string: ";
    cin.getline(str, SIZE);
    
    reverse(str);
    return 0;
}






// Definition of function reverse

void reverse(char *str) {
    const int size = (int)strlen(str);
    
    cout << "The string in reverse: ";
    
    for (int x = (size - 1); x >= 0; x--) {
        cout << str[x];
    }
    cout << endl;
}


/*
 
 Enter a string: Hello World!
 The string in reverse: !dlroW olleH
 Program ended with exit code: 0
 
 */

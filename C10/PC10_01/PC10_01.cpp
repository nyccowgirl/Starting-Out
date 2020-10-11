/*
 STRING LENGTH
 
 Write a function that returns an integer and accepts a pointer to a C-string as an
 argument. The function should count the number of characters in the string and return that
 number. Demonstrate the function in a simple program that asks the user to input a string,
 passes it to the function, and then displays the function's return value.
 
 PC10_01.cpp
 Staring Out/C10
 
 Created by nyccowgirl on 10/6/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <cctype>
using namespace std;


const int SIZE = 20;


int count(char *str);


int main(int argc, const char * argv[]) {
    char str[SIZE];
    
    cout << "Enter a string: ";
    cin.getline(str, SIZE);
    
    cout << "Length of the string: " << count(str) << endl;
    
    return 0;
}






// Definition of function count

int count(char *str) {
    int index = 0;
        
    while (str[index] != '\0') {
        index++;
    }
    return index;
}


/*
 
 Enter a string: Hello World!
 Length of the string: 12
 Program ended with exit code: 0
 
 */

/*
 NAME ARRANGER
 
 Write a program that asks for the user’s first, middle, and last names. The names should be
 stored in three different character arrays. The program should then store in a fourth array
 the name arranged in the following manner: the last name followed by a comma and a
 space, followed by the first name and a space, followed by the middle name. For example,
 if the user entered “Carol Lynn Smith”, it should store “Smith, Carol Lynn” in the
 fourth array. Display the contents of the fourth array on the screen.
 
 PC10_07.cpp
 Starting Out/C10
 
 Created by nyccowgirl on 10/7/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <cctype>
using namespace std;


const int SIZE = 100;


int main(int argc, const char * argv[]) {
    char first[SIZE], middle[SIZE], last[SIZE], name[SIZE];
    
    cout << "Enter your first, middle and last names separated by a space: ";
    cin >> first >> middle >> last;
    
    strcpy(name, last);
    strcat(name, ", ");
    strcat(name, first);
    strcat(name, " ");
    strcat(name, middle);
    cout << name << endl;
    return 0;
}


/*
 
 Enter your first, middle and last names separated by a space: Ruth Bader Ginsburg
 Ginsburg, Ruth Bader
 Program ended with exit code: 0
 
 */

/*
 Program illustrates C-strings.
 
 C10_16.cpp
 Starting Out/C10
 
 Created by nyccowgirl on 10/6/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;


void mess(char []);


int main(int argc, const char * argv[]) {
    char stuff[] = "Tom Talbert Tried Trains";
    
    cout << stuff << endl;
    mess(stuff);
    cout << stuff << endl;
    return 0;
}






// Definition of function mess

void mess(char str[]) {
    int step = 0;
    
    while (str[step] != '\0') {
        if (str[step] == 'T') {
            str[step] = 'D';
        }
        step++;
    }
}


/*
 
 Tom Talbert Tried Trains
 Dom Dalbert Dried Drains
 Program ended with exit code: 0
 
 */

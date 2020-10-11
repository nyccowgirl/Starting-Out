/*
 Illustrates and displays default arguments.

 C6_22.cpp
 Starting Out/C6
 
 Created by nyccowgirl on 9/15/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;

void test(int = 2, int = 4, int = 6);                              // Function prototype

int main(int argc, const char * argv[]) {
    test();
    test(6);
    test(3, 9);
    test(1, 5, 7);
    return 0;
}






// Definition of function test

void test(int first, int second, int third) {
    first += 3;
    second += 6;
    third += 9;
    cout << first << " " << second << " " << third << endl;
}


/*
 
 5 10 15
 9 10 15
 6 15 15
 4 11 16
 Program ended with exit code: 0
 
 */

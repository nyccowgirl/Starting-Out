/*

 Program illustrates pointers.
 C9_04.cpp
 Starting Out/C09
 
 Created by nyccowgirl on 10/1/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    int x = 50, y = 60, z = 70;
    int *ptr;
    
    cout << x << " " << y << " " << z << endl;
    ptr = &x;
    *ptr *= 10;
    ptr = &y;
    *ptr *= 5;
    ptr = &z;
    *ptr *= 2;
    cout << x << " " << y << " " << z << endl;

    return 0;
}


/*
 
 50 60 70
 500 300 140
 Program ended with exit code: 0
 
 */

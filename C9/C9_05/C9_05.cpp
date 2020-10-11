/*

 Program illustrates for loop using pointers.
 C9_05.cpp
 Starting Out/C9
 
 Created by nyccowgirl on 10/1/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    int arr[100] = {0}, *ptr = arr;
    
    for (int x = 0; x < 100; x++) {
        cout << *(ptr + x) << endl;
    }

    return 0;
}


/*
 
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 0
 Program ended with exit code: 0
 
 */

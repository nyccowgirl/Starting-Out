/*
 POINTER REWRITE

 Rewrite the program to use pointers instead of refeence variables.
 
 PC9_05.cpp
 Starting Out/C9
 
 Created by nyccowgirl on 10/4/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;


int doSomething(int *x, int *y);


int main(int argc, const char * argv[]) {
    int x = 1, y = 2;
    int *ptr1 = &x, *ptr2 = &y;
    
    cout << doSomething(ptr1, ptr2) << endl;
    return 0;
}






// Definition of function doSomething.

int doSomething(int *x, int *y) {
    int temp = *x;
    *x = *y * 10;
    *y = temp * 10;
    return *x + *y;
}



/*
 
 30
 Program ended with exit code: 0
 
 */

/*
 ARRAY ALLOCATOR

 Program illustrates dynamic memory allocation.
 PC9_01.cpp
 Starting Out/C9
 
 Created by nyccowgirl on 10/4/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;


int *showAddress(int size);


int main(int argc, const char * argv[]) {
    int size = 2;
    int *ptr;
    
    ptr = showAddress(size);
    
    cout << "Pointer address: " << ptr << endl;
    
    delete [] ptr;
    ptr = nullptr;
    return 0;
}






// Definition of function convert.

int *showAddress(int size) {
    int *ptr;
    
    ptr = new int[size];
    return ptr;
}


/*
 
 Pointer address: 0x100652db0
 Program ended with exit code: 0
 
 */

/*
 Program illustrates array and functions.
 
 C7_17.cpp
 Starting Out/C07
 
 Created by nyccowgirl on 9/21/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;


void fillArray(char arr[], int size);
void showArray(const char codes[], int size);


int main(int argc, const char * argv[]) {
    const int SIZE = 8;
    char prodCode[SIZE] = {'0', '0', '0', '0', '0', '0', '0', '0'};
    
    fillArray(prodCode, SIZE);
    showArray(prodCode, SIZE);
    return 0;
}






// Definition of function fillArray. (Hint: 65 is the ASCII code for 'A')

void fillArray(char arr[], int size) {
    char code = 65;
    
    for (int k = 0; k < size; code++, k++) {
        arr[k] = code;
    }
}






// Definition of function showArray.

void showArray(const char codes[], int size) {
    for (int k = 0; k < size; k++) {
        cout << codes[k];
    }
    cout << endl;
}


/*
 
 ABCDEFGH
 Program ended with exit code: 0
 
 */

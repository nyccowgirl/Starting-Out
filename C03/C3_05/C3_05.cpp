/*
 This program multiplies two numbers and displays the result.
 
 C3_05.cpp
 Starting Out/C03
 
 Created by nyccowgirl on 9/12/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    double first, second, product;      // Holds two numbers to calculate the product
    
    cout << "Enter two numbers to multiply: ";
    cin >> first >> second;
    product = first * second;
    cout << "Total: " << product << endl;
    return 0;
}


/*
 
 Enter two numbers to multiply: 543 21
 Total: 11403
 Program ended with exit code: 0
 
 */

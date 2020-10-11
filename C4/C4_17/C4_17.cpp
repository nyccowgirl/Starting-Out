/*
 Determines number of discount coupons a customer gets
 
 C4_17.cpp
 Starting Out/C4
 
 Created by nyccowgirl on 9/12/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int numBooks, numCoupons;       // Holds number of books and coupons
    
    cout << "How many books are being purchased? ";
    cin >> numBooks;
    
    if (numBooks < 1) {
        numCoupons = 0;
    } else if (numBooks < 3) {
        numCoupons = 1;
    } else if (numBooks < 5) {
        numCoupons = 2;
    } else {
        numCoupons = 3;
    }
    
    cout << "The number of coupons to give is " << numCoupons << endl;
    return 0;
}


/*
 
 How many books are being purchased? 1
 The number of coupons to give is 1
 Program ended with exit code: 0
 
 How many books are being purchased? 3
 The number of coupons to give is 2
 Program ended with exit code: 0
 
 How many books are being purchased? 4
 The number of coupons to give is 2
 Program ended with exit code: 0
 
 How many books are being purchased? 5
 The number of coupons to give is 3
 Program ended with exit code: 0
 
 How many books are being purchased? 10
 The number of coupons to give is 3
 Program ended with exit code: 0
 
 */

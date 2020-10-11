/*
 isPRIME FUNCTION
 
 Program determines whether a number is prime.
 
 PC6_21.cpp
 Starting Out/C6
 
 Created by nyccowgirl on 9/20/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;


bool isPrime(int num);                          // Function prototype


int main(int argc, const char * argv[]) {
    int num;                                    // Holds an integer
    
    cout << "Enter a number: ";
    cin >> num;
    cout << "The number " << num << " is ";
    isPrime(num) ? cout << "prime.\n" : cout << "not prime.\n";
    return 0;
}






// Definition of function isPrime. Functions passes a number and returns true or false
// as to whether the number is prime.

bool isPrime(int num) {
    
    if (num <= 1) {
        return false;
    } else {
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }
}


/*
 
 Enter a number: 31
 The number 31 is prime.
 Program ended with exit code: 0
 
 Enter a number: 111
 The number 111 is not prime.
 Program ended with exit code: 0
 
 */

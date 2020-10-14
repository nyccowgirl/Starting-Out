/*
 PRIME NUMBER LIST
 
 Program writes to file a list of prime numbers from 1 through 100.
 
 PC6_22.cpp
 Starting Out/C06
 
 Created by nyccowgirl on 9/20/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <fstream>
using namespace std;


bool isPrime(int num);                          // Function prototype


int main(int argc, const char * argv[]) {
    ofstream outputFile;
    outputFile.open("prime.txt");
    
    int low = 1, high = 100;               // Holds an integer and low/high range
    
    outputFile << "Prime Numbers" << endl;
    outputFile << "-------------" << endl;
    
    for (int count = low; count <= high; count++) {
        if (isPrime(count)) {
            outputFile << count << endl;
        }
    }
    
    outputFile.close();
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
 
 Prime Numbers
 -------------
 2
 3
 5
 7
 11
 13
 17
 19
 23
 29
 31
 37
 41
 43
 47
 53
 59
 61
 67
 71
 73
 79
 83
 89
 97
 Program ended with exit code: 0
 
 */

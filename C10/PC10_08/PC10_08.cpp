/*
 SUM OF DIGITS IN A STRING
 
 Write a program that asks the user to enter a series of single-digit numbers with nothing
 separating them. Read the input as a C-string or a string object. The program should
 display the sum of all the single-digit numbers in the string. For example, if the user
 enters 2514, the program should display 12, which is the sum of 2, 5, 1, and 4. The program
 should also display the highest and lowest digits in the string.
 
 PC10_08.cpp
 Starting Out/C10
 
 Created by nyccowgirl on 10/7/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <cctype>
using namespace std;


const int SIZE = 20;


int main(int argc, const char * argv[]) {
    char nums[SIZE], buffer[1];
    char lowest, highest;
    int sum = 0,  index = 0;
    
    cout << "Enter a series of of single-digit numbers with nothing separating them: ";
    cin >> nums;
    
    lowest = highest = nums[0];
    
    while (nums[index] != '\0') {
        buffer[0] = nums[index];
        sum += atoi(buffer);
        
        if (buffer[0] < lowest) {
            lowest = buffer[0];
        }
        
        if (buffer[0] > highest) {
            highest = buffer[0];
        }
        index++;
    }
    
    cout << "The sum of the numbers is: " << sum << endl;
    cout << "The highest number is: " << highest << endl;
    cout << "The lowest number is: " << lowest << endl;
    return 0;
}


/*
 
 Enter a series of of single-digit numbers with nothing separating them: 123456789
 The sum of the numbers is: 45
 The highest number is: 9
 The lowest number is: 1
 Program ended with exit code: 0
 
 */

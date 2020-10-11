/*
 VOWELS AND CONSONANTS
 
 Write a function that accepts a pointer to a C-string as its argument. The function should
 count the number of vowels appearing in the string and return that number. Write another
 function that accepts a pointer to a C-string as its argument. This function should count
 the number of consonants appearing in the string and return that number.
 
 PC10_06.cpp
 Starting Out/C10
 
 Created by nyccowgirl on 10/6/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <cctype>
//#include <string>
using namespace std;


const int SIZE = 100;


int countVowels(const char *str);
int countConsonants(const char *str);


int main(int argc, const char * argv[]) {
    char choice;
    char str[SIZE];
    
    cout << "Enter a string: ";
    cin.getline(str, SIZE, '\n');
    
    do {
        cout << "\nChoose from the following menu:" << endl;
        cout << "-------------------------------" << endl;
        cout << "A) Count the number of vowels in the string" << endl;
        cout << "B) Count the number of consonants in the string" << endl;
        cout << "C) Count both the vowels and consonants in the string" << endl;
        cout << "D) Enter another string" << endl;
        cout << "E) Exit the program" << endl;
        cin >> choice;
        choice = toupper(choice);

        switch (choice) {
            case 'A' :
                cout << "\nNumber of vowels: " << countVowels(str) << endl;
                break;
            case 'B' :
                cout << "\nNumber of consonants: " << countConsonants(str) << endl;
                break;
            case 'C' :
                cout << "\nNumber of both vowels & consonants: ";
                cout << countVowels(str) + countConsonants(str) << endl;
                break;
            case 'D' :
                cin.ignore();
                cout << "\nEnter another string: ";
                cin.getline(str, SIZE, '\n');
        }
    } while (choice != 'E');
    return 0;
}






// Definition of function countVowels

int countVowels(const char *str) {
    int count = 0;
    
    while (*str != '\0') {
        if (toupper(*str) == 'A' || toupper(*str) == 'E' || toupper(*str) == 'I' ||
            toupper(*str) == 'O' || toupper(*str) == 'U') {
            count++;
        }
        str++;
    }
    return count;
}






// Definition of function countConsonants

int countConsonants(const char *str) {
    int count = 0;
    
    while (*str != '\0') {
        if (isalpha(*str) && (!(toupper(*str) == 'A' || toupper(*str) == 'E' ||
            toupper(*str) == 'I' || toupper(*str) == 'O' || toupper(*str) == 'U'))) {
            count++;
        }
        str++;
    }
    return count;
}



/*
 
 Enter a string: su·per·ca·li·fra·gil·is·tic·ex·pi·a·li·do·cious

 Choose from the following menu:
 -------------------------------
 A) Count the number of vowels in the string
 B) Count the number of consonants in the string
 C) Count both the vowels and consonants in the string
 D) Enter another string
 E) Exit the program
 a

 Number of vowels: 16

 Choose from the following menu:
 -------------------------------
 A) Count the number of vowels in the string
 B) Count the number of consonants in the string
 C) Count both the vowels and consonants in the string
 D) Enter another string
 E) Exit the program
 b

 Number of consonants: 18

 Choose from the following menu:
 -------------------------------
 A) Count the number of vowels in the string
 B) Count the number of consonants in the string
 C) Count both the vowels and consonants in the string
 D) Enter another string
 E) Exit the program
 c

 Number of both vowels & consonants: 34

 Choose from the following menu:
 -------------------------------
 A) Count the number of vowels in the string
 B) Count the number of consonants in the string
 C) Count both the vowels and consonants in the string
 D) Enter another string
 E) Exit the program
 d

 Enter another string: abracadabra

 Choose from the following menu:
 -------------------------------
 A) Count the number of vowels in the string
 B) Count the number of consonants in the string
 C) Count both the vowels and consonants in the string
 D) Enter another string
 E) Exit the program
 a

 Number of vowels: 5

 Choose from the following menu:
 -------------------------------
 A) Count the number of vowels in the string
 B) Count the number of consonants in the string
 C) Count both the vowels and consonants in the string
 D) Enter another string
 E) Exit the program
 b

 Number of consonants: 6

 Choose from the following menu:
 -------------------------------
 A) Count the number of vowels in the string
 B) Count the number of consonants in the string
 C) Count both the vowels and consonants in the string
 D) Enter another string
 E) Exit the program
 c

 Number of both vowels & consonants: 11

 Choose from the following menu:
 -------------------------------
 A) Count the number of vowels in the string
 B) Count the number of consonants in the string
 C) Count both the vowels and consonants in the string
 D) Enter another string
 E) Exit the program
 e
 Program ended with exit code: 0
 
 */

/*
 PIG LATIN
 
 Write a program that reads a sentence as input and converts each word to "Pig Latin." In
 one version, to convert a word to Pig Latin you remove the first letter and place that
 letter at the end of the word. Then you append the string "ay" to the word.
 
 PC10_16.cpp
 Starting Out/C10
 
 Created by nyccowgirl on 10/9/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <cctype>
#include <string>
using namespace std;


const int SIZE = 20;


void upperCase(char *word);
string convertPigLat(const char *word);


int main(int argc, const char * argv[]) {
    char word[SIZE];
    string sentence, tempStc;
    string pigLatin;
    char temp;
    int index = 0, length;

    cout << "Enter a sentence: ";
    getline(cin, sentence, '\n');
    length = static_cast<int>(sentence.length());
    
    
    while (index < length) {
        temp = sentence.find(' ', index);
        
        if (temp != -1) {
            tempStc = sentence.substr(index, temp - index);
        } else {
            tempStc = sentence.substr(index, length - index);
        }
        
        strcpy(word, tempStc.c_str());
        upperCase(word);
        pigLatin.append(convertPigLat(word));
        pigLatin.append(1, ' ');
        index += strlen(word) + 1;
    }
    cout << "The sentence in Pig Latin is: " << pigLatin << endl;
    return 0;
}






// Definition of function upperCase

void upperCase(char *word) {
    
    while (*word != '\0') {
        *word = toupper(*word);
        word++;
    }
}






// Definition of function convertPigLat

string convertPigLat(const char *word) {
    char temp;
    string pigLat;
    
    temp = *word;
    word++;
    pigLat.append(word);
    pigLat.append(1, temp);
    pigLat.append("AY");
    return pigLat;
}


/*
 
 Enter a sentence: I SLEPT MOST OF THE NIGHT
 The sentence in Pig Latin is: IAY LEPTSAY OSTMAY FOAY HETAY IGHTNAY
 Program ended with exit code: 0
 
 */

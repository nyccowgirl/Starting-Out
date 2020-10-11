/*
 MORSE CODE CONVERTER
 
 Write a program that asks the user  to enter a string,  and then converts that string to
 Morse code.
 
 PC10_17.cpp
 Starting Out/C10
 
 Created by nyccowgirl on 10/10/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <string>
using namespace std;


string convMorse(const char letter);


int main(int argc, const char * argv[]) {
    string str;
    int index = 0;

    cout << "Enter a string: ";
    getline(cin, str, '\n');
    
    cout << "The string in Morse Code is: ";

    while (str[index] != '\0') {
        cout << convMorse(str[index]);
        index++;
    }
    cout << endl;
    return 0;
}






// Definition of function convMorse

string convMorse(const char letter) {

    switch (letter) {
        case ' ' :
            return " ";
            break;
        case ',' :
            return "--..--";
            break;
        case '.' :
            return ".-.-.-";
            break;
        case '?' :
            return "..--..";
            break;
        case '0' :
            return "-----";
            break;
        case '1' :
            return ".----";
            break;
        case '2' :
            return "..---";
            break;
        case '3' :
            return "...--";
            break;
        case '4' :
            return "....-";
            break;
        case '5' :
            return ".....";
            break;
        case '6' :
            return "-....";
            break;
        case '7' :
            return "--...";
            break;
        case '8' :
            return "---..";
            break;
        case '9' :
            return "----.";
            break;
        case 'a' :
        case 'A' :
            return ".-";
            break;
        case 'b' :
        case 'B' :
            return "-...";
            break;
        case 'c' :
        case 'C' :
            return "-.-.";
            break;
        case 'd' :
        case 'D' :
            return "-..";
            break;
        case 'e' :
        case 'E' :
            return ".";
            break;
        case 'f' :
        case 'F' :
            return "..-.";
            break;
        case 'g' :
        case 'G' :
            return "--.";
            break;
        case 'h' :
        case 'H' :
            return "....";
            break;
        case 'i' :
        case 'I' :
            return "..";
            break;
        case 'j' :
        case 'J' :
            return ".---";
            break;
        case 'k' :
        case 'K' :
            return "-.-";
            break;
        case 'l' :
        case 'L' :
            return ".-..";
            break;
        case 'm' :
        case 'M' :
            return "--";
            break;
        case 'n' :
        case 'N' :
            return "-.";
            break;
        case 'o' :
        case 'O' :
            return "---";
            break;
        case 'p' :
        case 'P' :
            return ".--.";
            break;
        case 'q' :
        case 'Q' :
            return "--.-";
            break;
        case 'r' :
        case 'R' :
            return ".-.";
            break;
        case 's' :
        case 'S' :
            return "...";
            break;
        case 't' :
        case 'T' :
            return "-";
            break;
        case 'u' :
        case 'U' :
            return "..-";
            break;
        case 'v' :
        case 'V' :
            return "...-";
            break;
        case 'w' :
        case 'W' :
            return ".--";
            break;
        case 'x' :
        case 'X' :
            return "-..-";
            break;
        case 'y' :
        case 'Y' :
            return "-.--";
            break;
        case 'z' :
        case 'Z' :
            return "--..";
            break;
        default :
            return " ";
            break;
    }
}


/*
 
 Enter a string: Hello World?
 The string in Morse Code is: ......-...-..--- .-----.-..-..-....--..
 Program ended with exit code: 0
 
 */

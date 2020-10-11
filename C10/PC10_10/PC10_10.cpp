/*
 replaceSubstring FUNCTION
 
 Write a function named replaceSubstring. The function should accept three C-string or
 string object arguments. Let's call them string1, string2 and string3. It hsould search
 string1 for all occurrences of string 2. When it finds an occurrence of string2, it should
 replace it with string3.
 
 PC10_10.cpp
 Starting Out/C10
 
 Created by nyccowgirl on 10/8/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <cctype>
#include <string>
using namespace std;


string replaceSubstring(const char *str1, const char *str2, const char *str3);
string replaceSubstring(const string &strObj1, const string &strObj2, const string &strObj3);


const int SIZE = 10;


int main(int argc, const char * argv[]) {
    char str1[SIZE], str2[SIZE], str3[SIZE];
    string strObj1, strObj2, strObj3;
    
    cout << "Enter a string to search in: ";
    getline(cin, strObj1, '\n');
    
    cout << "Enter a string to search for: ";
    getline(cin, strObj2, '\n');
    
    cout << "Enter a string to replace it with: ";
    getline(cin,strObj3, '\n');
    
    cout << "The modified string is: ";

    if (strObj1.length() < SIZE && strObj2.length() < SIZE && strObj3.length() < SIZE) {
        strncpy(str1, strObj1.c_str(), SIZE);
        strncpy(str2, strObj2.c_str(), SIZE);
        strncpy(str3, strObj3.c_str(), SIZE);
        cout << replaceSubstring(str1, str2, str3) << endl;
    } else {
        cout << replaceSubstring(strObj1, strObj2, strObj3) << endl;
    }
    
    return 0;
}






// Definition of function replaceSubstring for character array

string replaceSubstring(const char *str1, const char *str2, const char *str3) {
    int length1 = (int)strlen(str1), length2 = (int)strlen(str2),
        length3 = (int)strlen(str3);
    char buffer[length1 * 2];
    char *ptr = buffer;
    
    if ((strstr(str1, str2)) != NULL){
        do {
            if (strstr(str1, str2) == str1) {
                strcpy(ptr, str3);
                ptr += length3;
                str1 += length2;
            } else {
                *ptr++ = *str1++;
            }
        } while (*str1 != '\0');
    } else {
        strcpy(buffer, str1);
    }
    return buffer;
}






// Definition of function replaceSubstring for string class object

string replaceSubstring(const string &strObj1, const string &strObj2, const string &strObj3) {
    int length1 = static_cast<int>(strObj1.length()),
        length2 = static_cast<int>(strObj2.length()),
        length3 = static_cast<int>(strObj3.length());
    string buffer;
    int index1 = 0, index2 = 0;
    
    if(strObj1.find(strObj2, index1) != -1) {

        do {
            
            if (strObj1.find(strObj2, index1) == index1) {
                buffer.insert(index2, strObj3);
                index2 += length3;
                index1 += length2;
            } else {
                buffer.insert(index2, 1, strObj1[index1]);
                index1++;
                index2++;
            }
        } while (index1 < length1);
    } else {
        buffer = strObj1;
    }
    return buffer;
}



/*
 
 Enter a string to search in: the dog jumped over the fence
 Enter a string to search for: the
 Enter a string to replace it with: that
 The modified string is: that dog jumped over that fence
 Program ended with exit code: 0
 
 */

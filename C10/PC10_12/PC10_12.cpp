/*
 PASSWORD VERIFIER
 
 Imagine you are developing a software package that requires users to enter their own
 passwords. Your software requires that users' passwords meet the following criteria;
            - at least six characters long
            - contain at least one uppercase and at least one lowercase
            - at least one digit
 
 PC10_12.cpp
 Starting Out/C10
 
 Created by nyccowgirl on 10/9/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <cctype>
using namespace std;


const int SIZE = 20;


int main(int argc, const char * argv[]) {
    char password[SIZE];
    char *str;
    int upper, lower, digit, length;
        
    cout << "Passwords should contain:" << endl;
    cout << " - at least 6 characters" << endl;
    cout << " - at least an uppercase" << endl;
    cout << " - at least a lowercase" << endl;
    cout << " - at least a digit\n" << endl;
    
    do {
        upper = lower = digit = length = 0;

        cout << "Enter your password: ";
        cin.getline(password, SIZE);
        str = password;
        length = static_cast<int>(strlen(password));
        
        while (*str != '\0') {
            if (isdigit(*str)) {
                digit++;
            } else if (islower(*str)) {
                lower++;
            } else if (isupper(*str)) {
                upper++;
            }
            str++;
        }
        
        if (length < 6) {
            cout << "Your password is not long enough." << endl;
        } else if (digit == 0) {
            cout << "Your password does not contain at least one digit." << endl;
        } else if (lower == 0) {
            cout << "Your password does not contain at least a lowercase letter." << endl;
        } else if (upper == 0) {
            cout << "Your password does not contain at least an uppercase letter." << endl;
        }
        
    } while (length < 6 || upper == 0 || lower == 0 || digit == 0);
        
    cout << "Password verified! Your password is: " << password << endl;
    return 0;
}


/*
 
 Passwords should contain:
  - at least 6 characters
  - at least an uppercase
  - at least a lowercase
  - at least a digit
 
 Enter your password: abcDE
 Your password is not long enough.
 Enter your password: abcDEF
 Your password does not contain at least one digit.
 Enter your password: abcdef1
 Your password does not contain at least an uppercase letter.
 Enter your password: ABCDE1
 Your password does not contain at least a lowercase letter.
 Enter your password: ABcd12
 Password verified! Your password is: ABcd12
 Program ended with exit code: 0
 
 */

/*
 NUMBERS CLASS
 
 Design a class Numbers that can be used to translate whole dollar amounts in the range 0
 through 9999 into an English description of the number. For example, the number 713 would
 be translated into the string seven hundred thirteen and 8203 would be translated into
 eight thousand two hundred three. The class should have single integer member variable:
 
 int number;
 
 and a static array of string objects that specify how to translate key dollar amounts into
 the desired format. The class should have a constructor that accepts a nonnegative integer
 and uses it to initialize the Numbers object. It should have a member function print() that
 prints the English description of the Numbers object. Demonstrate the class by writing a
 main program that asks the user to enter a number in the proper range and then prints out
 its English description.
 
 PC14_01.cpp
 Starting Out/C14
 
 Created by nyccowgirl on 10/25/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;


class Numbers
{
 public:
    Numbers(int inNum = 0) {
        number = inNum;
    }
    void setNum();
    void print() const;

private:
    int number;
    static string lessThan20[20];
    static string tens[8];
    static string hundred;
    static string thousand;
};






string Numbers::lessThan20[20] = {"zero", "one", "two", "three", "four", "five", "six",
                                "seven", "eight", "nine", "ten", "eleven", "twelve",
                                "thirteen", "fourteen", "fifteen", "sixteen",
                                "seventeen", "eighteen", "nineteen"};







string Numbers::tens[8] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy",
                         "eighty", "ninety"};







string Numbers::hundred = "hundred";







string Numbers::thousand = "thousand";






void Numbers::setNum() {
    do {
        cout << "Enter a number from 0 to 9999: ";
        cin >> number;
        
        if (number < 0 || number > 9999) {
            cout << "Invalid input: number should be from 0 to 9999." << endl;
        }
    } while (number < 0 || number > 9999);
}






void Numbers::print() const {
    int n, remainder;
    
    remainder = number;
    
    do {
        if (remainder > 1000) {
            n = remainder / 1000;
            remainder %= 1000;
            cout << lessThan20[n] << " " << thousand << " ";
        } else if (remainder > 100) {
            n = remainder / 100;
            remainder %= 100;
            cout << lessThan20[n] << " " << hundred << " ";
        } else if (remainder >= 20) {
            n = remainder / 10;
            remainder %= 10;
            cout << tens[n - 2] << " ";
        } else {
            cout << lessThan20[remainder] << endl;
            remainder = 0;
        }
        
    } while (remainder > 0);
    
}






int main(int argc, const char * argv[]) {
    Numbers num;
    
    num.setNum();
    num.print();
    return 0;
}


/*
 
 Enter a number from 0 to 9999: 7777
 seven thousand seven hundred seventy seven
 Program ended with exit code: 0
 
 */

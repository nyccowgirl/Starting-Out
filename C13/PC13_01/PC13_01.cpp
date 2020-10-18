/*
 DATE
 
 Design a class called Date. The class should store a date in three integers: month, day,
 and year. There should be member functions to print the date in the following forms:
        - 12/25/2012
        - December 25, 2012
        - 25 December 2012
 
 PC13_01.cpp
 Starting Out/C13
 
 Created by nyccowgirl on 10/18/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <iomanip>
using namespace std;


class Date
{
     public:
        void setMonth(int inMonth);
        void setDay(int inDay);
        void setYear(int inYear);
        void printShort() const;
        void printLongUS() const;
        void printLongFor() const;

    private:
        int month;
        int day;
        int year;
        string monthLong() const;
};






// Definition of class function setMonth

void Date::setMonth(int inMonth) {
    month = inMonth;
}






// Definition of class function setDay

void Date::setDay(int inDay) {
    day = inDay;
}






// Definition of class function setYear

void Date::setYear(int inYear) {
    year = inYear;
}






// Definition of class function printShort

void Date::printShort() const {
    cout << month << "/" << day << "/" << setfill('0') << setw(4) << year;
}






// Definition of class function printLongUS

void Date::printLongUS() const {
    cout << monthLong() << " " << day << ", " << setfill('0') << setw(4) << year;
}






// Definition of class function printLongUS

void Date::printLongFor() const {
    cout << day << " " << monthLong() << " " << setfill('0') << setw(4) << year;
}






// Definition of class function monthLong

string Date::monthLong() const {
    switch (month) {
        case 1 :
            return "January";
            break;
        case 2 :
            return "February";
            break;
        case 3 :
            return "March";
            break;
        case 4 :
            return "April";
            break;
        case 5 :
            return "May";
            break;
        case 6 :
            return "June";
            break;
        case 7 :
            return "July";
            break;
        case 8 :
            return "August";
            break;
        case 9 :
            return "September";
            break;
        case 10 :
            return "October";
            break;
        case 11 :
            return "November";
            break;
        case 12 :
        default :
            return "December";
    }
}






int getInput(char type);
bool validateInput(int input, char type);


int main(int argc, const char * argv[]) {
    int month, day, year;
    Date input;
    
    month = getInput('M');
    input.setMonth(month);
    day = getInput('D');
    input.setDay(day);
    year = getInput('Y');
    input.setYear(year);
    input.printShort();
    cout << endl;
    input.printLongUS();
    cout << endl;
    input.printLongFor();
    cout << endl;
    return 0;
}






// Definition for function getInput

int getInput(char type) {
    int temp;
    bool valid;
    
    if (type == 'M') {
        do {
            cout << "Enter the month: ";
            cin >> temp;
            valid = validateInput(temp, type);
            
            if (!valid) {
                cout << "Invalid input: month has to be between 1 and 12." << endl;
            }
        } while (!valid);
    } else if (type == 'D') {
        do {
            cout << "Enter the day: ";
            cin >> temp;
            valid = validateInput(temp, type);
            
            if (!valid) {
                cout << "Invalid input: day has to be between 1 and 31." << endl;
            }
        } while (!valid);
    } else {
        cout << "Enter the year: ";
        cin >> temp;
    }
    return temp;
}






// Definition for function validateInput

bool validateInput(int input, char type) {
    if (type == 'M' && (input < 1 || input > 12)) {
        return false;
    } else if (type == 'D' && (input < 0 || input > 31)) {
        return false;
    } else {
        return true;
    }
}


/*
 
 Enter the month: 12
 Enter the day: 25
 Enter the year: 2012
 12/25/2012
 December 25, 2012
 25 December 2012
 Program ended with exit code: 0
 
 */

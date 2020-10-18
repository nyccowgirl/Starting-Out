/*
 
 Program illustrates classes.
 
 C13_05.cpp
 Starting Out/C13
 
 Created by nyccowgirl on 10/18/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;


class Date
{
    public:
        void set(int inMonth, int inDay, int inYear);
        void print() const;

    private:
        int month;
        int day;
        int year;
};






// Definition of class function set

void Date::set(int inMonth, int inDay, int inYear) {
    month = inMonth;
    day = inDay;
    year = inYear;
}






// Definition of class function print

void Date::print() const {
    cout << month << "/" << day << "/" << year;
}






int main(int argc, const char * argv[]) {
    Date birthday;
    
    birthday.set(4, 2, 2012);
    birthday.print();
    cout << endl;
    return 0;
}


/*
 
 4/2/2012
 Program ended with exit code: 0
 
 */

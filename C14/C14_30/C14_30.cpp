/*
 Illustrate prefix and postfix -- operators
 
 C14_30.cpp
 Starting Out/C14
 
 Created by nyccowgirl on 10/24/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;


class FeetInches
{
 public:
    FeetInches(int inFt = 0, int inInch = 0) {
        feet = inFt;
        inches = inInch;
    }
    FeetInches operator--();
    FeetInches operator--(int);
    void print();

private:
    int feet;
    int inches;
    void simplify();
};






FeetInches FeetInches::operator--() {
    --inches;
    simplify();
    return *this;
}






FeetInches FeetInches::operator--(int) {
    FeetInches temp(feet, inches);
    inches--;
    temp.simplify();
    return temp;
}






void FeetInches::print() {
    cout << feet << " feet " << inches << " inches";
}






void FeetInches::simplify() {
    if (inches >= 12) {
        feet += (inches / 12);
        inches = inches % 12;
    } else if (inches < 0) {
        feet -= ((abs(inches) / 12) + 1);
        inches = 12 - (abs(inches) % 12);
    }
}






int main(int argc, const char * argv[]) {
    FeetInches test(5, 1);
    
    test.print();
    cout << endl;
    (test--).print();
    cout << endl;
    (--test).print();
    cout << endl;

    return 0;
}


/*
 
 5 feet 1 inches
 5 feet 1 inches
 4 feet 11 inches
 Program ended with exit code: 0
 
 */

/*
 RECTANGLE AREA
 
 Program to calculate area of rectangle based on user inputs of length and width.

 PC6_02.cpp
 Starting Out/C06
 
 Created by nyccowgirl on 9/16/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <iomanip>
using namespace std;


double getLength();                            // Function prototypes
double getWidth();
void validateInput(double &input);
double getArea(double length, double width);
void displayData(double length, double width, double area);


int main(int argc, const char * argv[]) {
    double length, width, area;                // Holds length, width and area for rectangle
    
    length = getLength();
    width = getWidth();
    area = getArea(length, width);
    displayData(length, width, area);
    return 0;
}






// Definition of function getLength. Function gets the user input for length of a rectangle.

double getLength() {
    double length;                             // Holds length input from user
    
    cout << "Enter the rectangle's length: ";
    cin >> length;
    validateInput(length);
    return length;
}






// Definition of function getWidth. Function gets the user input for width of a rectangle.

double getWidth() {
    double width;                              // Holds width input from user

    cout << "Enter the rectangle's width: ";
    cin >> width;
    validateInput(width);
    return width;
}






// Definition of function validateInput. Function passes reference variable to validate
// that it is a positive number, and passes input back.

void validateInput(double &input) {
    while (input <= 0) {
        cout << "Number cannot be zero or negative. Please re-enter: ";
        cin >> input;
    }
}






// Definition of function getArea. Function passes in length and width of a rectangle and
// returns the area of the rectangle.

double getArea(double length, double width) {
    return length * width;
}






// Definition of function displayData. Function passes in length, width and area of a
// rectangle and displays them in an appropriate message.

void displayData(double length, double width, double area) {
    cout << "The area of a rectangle with length of " << length;
    cout << " and width of " << width << " is " << area << "." << endl;
}


/*
 
 Enter the rectangle's length: -1
 Number cannot be zero or negative. Please re-enter: 111
 Enter the rectangle's width: -2
 Number cannot be zero or negative. Please re-enter: 222
 The area of a rectangle with length of 111 and width of 222 is 24642.
 Program ended with exit code: 0
 
 */

/*
 Illustrates and displays default arguments.

 C6_23.cpp
 Starting Out/C6
 
 Created by nyccowgirl on 9/15/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;

void func1(int &, int &);                            // Function prototype
void func2(int &, int &, int &);
void func3(int, int, int);

int main(int argc, const char * argv[]) {
    int x = 0, y = 0, z = 0;                        // Define variables
    
    cout << x << " " << y << " " << z << endl;
    func1(x, y);
    cout << x << " " << y << " " << z << endl;
    func2(x, y, z);
    cout << x << " " << y << " " << z << endl;
    func3(x, y, z);
    cout << x << " " << y << " " << z << endl;
    return 0;
}






// Definition of function func1

void func1(int &a, int &b) {
    cout << "Enter two numbers: ";
    cin >> a >> b;
}






// Definition of function func2

void func2(int &a, int &b, int &c) {
    b++;
    c--;
    a = b + c;
}






// Definition of function func3

void func3(int a, int b, int c) {
    a = b - c;
}


/*
 
 0 0 0
 Enter two numbers: 12 14
 12 14 0
 14 15 -1
 14 15 -1
 Program ended with exit code: 0
 
 */

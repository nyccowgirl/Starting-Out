/*
 Program illustrates classes & constructors.
 
 C13_26.cpp
 Starting Out/C13
 
 Created by nyccowgirl on 10/19/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;


class Yard
{
    public:
        Yard() {
            length = 0;
            width = 0;
        }
        void setLength(int len) {
            length = len;
        }
        void setWidth(int w) {
            width = w;
        }

    private:
        int length, width;
};


int main(int argc, const char * argv[]) {
    int length, width, size = 2;
    Yard array[size];
    
    for (int i = 0; i < size; i++) {
        cout << "Enter length of yard " << i + 1 << ": ";
        cin >> length;
        array[i].setLength(length);
        cout << "Enter width of yard " << i + 1 << ": ";
        cin >> width;
        array[i].setWidth(width);
    }
    return 0;
}


/*
 
 Enter length of yard 1: 1
 Enter width of yard 1: 1
 Enter length of yard 2: 2
 Enter width of yard 2: 2
 Program ended with exit code: 0
 
 */

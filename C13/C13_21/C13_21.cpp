/*
 Program illustrates classes & constructors.
 
 C13_21.cpp
 Starting Out/C13
 
 Created by nyccowgirl on 10/19/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;


class Tank
{
    public:
        Tank() {
            gallons = 50;
        }
        Tank(int gal) {
            gallons = gal;
        }
        int getGallons() {
            return gallons;
        }

    private:
        int gallons;
};


int main(int argc, const char * argv[]) {
    Tank storage[3] = {10, 20};
    
    for (int index = 0; index < 3; index++) {
        cout << storage[index].getGallons() << endl;
    }
    return 0;
}


/*
 
 10
 20
 50
 Program ended with exit code: 0
 
 */

/*
 Program illustrates classes, constructors & destructors.
 
 C13_22.cpp
 Starting Out/C13
 
 Created by nyccowgirl on 10/19/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;


class Package
{
    public:
        Package() {
            value = 7;
            cout << value << endl;
        }
        Package(int v) {
            value = v;
            cout << value << endl;
        }
        ~Package() {
            cout << value << endl;
        }

    private:
        int value;
};


int main(int argc, const char * argv[]) {
    Package obj1(4);
    Package obj2;
    Package obj3(2);
    return 0;
}


/*
 
 4
 7
 2
 2
 7
 4
 Program ended with exit code: 0
 
 13.23:
 
 4  const #2
 7  const #1
 2  const #2
 2  destructor
 7  destructor
 4  destructor
 Program ended with exit code: 0
 
 */

/*
 Illustrates and displays for, while and do-while loops.
 
 C5_08_11.cpp
 Starting Out/C5
 
 Created by nyccowgirl on 9/13/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int count, count1, count2, count3;              // Hold various count variables
    int value = -5, x = 5;                          // Defines various variables
    string name = "Minx";                           // Defines name
    
    count = count1 = count2 = count3 = 0;
    
    for (count = 0; count < 6; count++) {
        cout << (count + count);
    }
    
    for (value = -5; value < 5; value++) {
        cout << value;
    }
    
    for (x = 5; x <= 14; x += 3) {
        cout << x << endl;
    }
    cout << x << endl;
    
    while (count1 < 10) {
        cout << name;
        count1++;
    }
    cout << endl;
    
    while (count2 < 50) {
        if (count2 % 2 == 1) {
            cout << count2 << " ";
        }
        count2++;
    }
    cout << endl;
    
    while (count3 <= 100) {
        
        if (count3 % 5 == 0) {
            cout << count3 << " ";
        }
        count3++;
    }
    cout << endl;
    
    return 0;
}


/*
 
 0246810-5-4-3-2-1012345
 8
 11
 14
 17
 MinxMinxMinxMinxMinxMinxMinxMinxMinxMinx
 1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31 33 35 37 39 41 43 45 47 49
 0 5 10 15 20 25 30 35 40 45 50 55 60 65 70 75 80 85 90 95 100
 Program ended with exit code: 0
 
 */

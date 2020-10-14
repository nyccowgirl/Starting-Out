/*
 Program illustrates array of integers.
 
 C7_13.cpp
 Starting Out/C07
 
 Created by nyccowgirl on 9/21/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    const int SIZE = 5;
    int time[SIZE] = {1, 2, 3, 4, 5},
        speed[SIZE] = {18, 4, 27, 52, 100},
        dist[SIZE];
    
    for (int count = 0; count < SIZE; count++) {
        dist[count] = time[count] * speed[count];
    }
    
    for (int count = 0; count < SIZE; count++) {
        cout << time[count] << " ";
        cout << speed[count] << " ";
        cout << dist[count] << endl;
    }
    return 0;
}


/*
 
 1 18 18
 2 4 8
 3 27 81
 4 52 208
 5 100 500
 Program ended with exit code: 0
 
 */

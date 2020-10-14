/*
 Program illustrates array of integers.
 
 C7_07.cpp
 Starting Out/C07
 
 Created by nyccowgirl on 9/21/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    const int NUM_FISH = 20;
    int count, fish[NUM_FISH];
    
    for (count = 0; count < NUM_FISH; count++) {
        cout << "What is the number of fish caught by Fisherman " << count + 1 << "? ";
        cin >> fish[count];
    }
    
    cout << "fish[" << NUM_FISH << "] = {";
    
    for (count = 0; count < NUM_FISH; count++) {
        cout << fish[count];
        
        if (count < (NUM_FISH - 1)) {
            cout << ", ";
        }
    }
    
    cout << "}" << endl;
    return 0;
}


/*
 
 What is the number of fish caught by Fisherman 1? 20
 What is the number of fish caught by Fisherman 2? 19
 What is the number of fish caught by Fisherman 3? 18
 What is the number of fish caught by Fisherman 4? 17
 What is the number of fish caught by Fisherman 5? 16
 What is the number of fish caught by Fisherman 6? 15
 What is the number of fish caught by Fisherman 7? 14
 What is the number of fish caught by Fisherman 8? 13
 What is the number of fish caught by Fisherman 9? 12
 What is the number of fish caught by Fisherman 10? 11
 What is the number of fish caught by Fisherman 11? 10
 What is the number of fish caught by Fisherman 12? 9
 What is the number of fish caught by Fisherman 13? 8
 What is the number of fish caught by Fisherman 14? 7
 What is the number of fish caught by Fisherman 15? 6
 What is the number of fish caught by Fisherman 16? 5
 What is the number of fish caught by Fisherman 17? 4
 What is the number of fish caught by Fisherman 18? 3
 What is the number of fish caught by Fisherman 19? 2
 What is the number of fish caught by Fisherman 20? 1
 fish[20] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1}
 Program ended with exit code: 0
 
 */

/*
 Program illustrates C-strings.
 
 C10_10.cpp
 Starting Out/C10
 
 Created by nyccowgirl on 10/6/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <cstring>
using namespace std;


int main(int argc, const char * argv[]) {
    char place[] = "The Windy City";
    
    if (strstr(place, "Windy") == nullptr) {
        cout << "Windy not found." << endl;
    } else {
        cout << "Windy found." << endl;
    }
    return 0;
}


/*
 
 Windy found.
 Program ended with exit code: 0
 
 */

/*
 COIN TOSS
 
 Program simulates tossing of a coin. It asks user for number of times the coin should be
 tossed and displays the results.
 
 PC6_08.cpp
 Starting Out/C06
 
 Created by nyccowgirl on 9/18/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;


void coinToss();                                        // Function prototypes


int main(int argc, const char * argv[]) {
    srand(static_cast<unsigned>(time(nullptr)));

    int num;                                            // Holds no of times of coin toss
    
    cout << "How many times would you like the coin to be tossed? ";
    cin >> num;
    cout << " Toss       Result" << endl;
    cout << "------     --------" << endl;
    
    for (int count = 1; count <= num; count++) {
        cout << setw(5) << count;
        coinToss();
    }
    
    return 0;
}






// Definition of function coinToss. Function generates ranom number from 1 (heads) to
// 2 (tails).

void coinToss() {
    
    int result;                                       // Holds results of random
    
    result = (rand() % 2) + 1;
    
    cout << setw(13);
    cout << (result == 1 ? "heads" : "tails") << endl;
   
}


/*
 
 How many times would you like the coin to be tossed? 10
  Toss       Result
 ------     --------
     1        heads
     2        tails
     3        heads
     4        heads
     5        tails
     6        heads
     7        tails
     8        heads
     9        tails
    10        tails
 Program ended with exit code: 0
 
 */

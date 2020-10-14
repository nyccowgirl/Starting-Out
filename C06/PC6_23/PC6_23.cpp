/*
 ROCK, PAPER, SCISSORS GAME
 
 Program lets a user play the game of Rock, Paper, Scissors against the computer.
 
 PC6_23.cpp
 Starting Out/C06
 
 Created by nyccowgirl on 9/20/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int pickComp();                             // Function prototype
int pickUser();
bool selectWinner(int num1, int num2);


int main(int argc, const char * argv[]) {
    srand(static_cast<unsigned>(time(nullptr)));
    
    int comp, user;                         // Holds the computer's and user's selections
    
    do {
        comp = pickComp();
        user = pickUser();
    
        cout << "The computer chose " ;
        
        switch (comp) {
            case 1:
                cout << "rock." << endl;
                break;
            case 2:
                cout << "paper." << endl;
                break;
            case 3:
                cout << "scissors." << endl;
        }
        
        if (comp == user) {
            cout << "It's a tie. Try again." << endl;
        }
        
    } while (comp == user);
    
    if (selectWinner(comp, user)) {
        cout << "You lose! Better luck next time." << endl;
    } else {
        cout << "Congrats! You won!" << endl;
    }

    return 0;
}






// Definition of function pickComp. Function returns a random number from 1 to 3 for
// the computer's choice.

int pickComp() {
    return (rand() % 3) + 1;
}






// Definition of function pickUser. Function asks user to pick rock, paper or scissors
// and returns the user's choice.

int pickUser() {
    int choice;
    
    cout << "Choose from one of the following:" << endl;
    cout << "1. Rock" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissors" << endl;
    
    do {
        cout << "Enter your selection: ";
        cin >> choice;
        
        if (!(choice == 1 || choice == 2 || choice == 3)) {
            cout << "Invalid input: Please choose 1, 2 or 3." << endl;
        }

    } while (!(choice == 1 || choice == 2 || choice == 3));
    
    return choice;
}






// Definition of function selectWinner. Function passes in choices from computer and user
// and returns true if computer wins.

bool selectWinner(int num1, int num2) {
    if (num1 == 1 && num2 == 3) {
        return true;
    } else if (num1 == 3 && num2 == 2) {
        return true;
    } else if (num1 == 2 && num2 == 1) {
        return true;
    } else {
        return false;
    }
}


/*
 
 Choose from one of the following:
 1. Rock
 2. Paper
 3. Scissors
 Enter your selection: 1
 The computer chose scissors.
 Congrats! You won!
 Program ended with exit code: 0
 
 Choose from one of the following:
 1. Rock
 2. Paper
 3. Scissors
 Enter your selection: 7
 Invalid input: Please choose 1, 2 or 3.
 Enter your selection: 2
 The computer chose rock.
 Congrats! You won!
 Program ended with exit code: 0
 
 Choose from one of the following:
 1. Rock
 2. Paper
 3. Scissors
 Enter your selection: 2
 The computer chose paper.
 It's a tie. Try again.
 Choose from one of the following:
 1. Rock
 2. Paper
 3. Scissors
 Enter your selection: 3
 The computer chose rock.
 You lose! Better luck next time.
 Program ended with exit code: 0
 
 */

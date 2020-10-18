/*
 SOCCER SORES
 
 Write a program that stores data about a soccer player in a structure. The program should
 keep an array of 12 of these structures. When the program runs it should ask the user to
 enter the data for each player. It should then show a table that lists each player's
 number, name and points scored. The program should calculate and display the total points
 earned by the team. The number and name of the player who has earned the most points
 should be displayed.
 
 C11_06.cpp
 Starting Out/C11
 
 Created by nyccowgirl on 10/13/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


const int SIZE = 12;


struct PlayerData
{
    string name;
    int number;
    int score;
};


void getInfo(PlayerData team[]);
bool validateInput(const int score);
void display(const PlayerData team[]);
int calcTotal(const PlayerData team[]);
int topScorer(const PlayerData team[]);


int main(int argc, const char * argv[]) {
    PlayerData team[SIZE];
        
    getInfo(team);
    display(team);
    return 0;
}






// Definition of function getInfo

void getInfo(PlayerData team[]) {
    bool valid;
    
    for (int x = 0; x < SIZE; x++) {
        cout << "Player #" << x + 1 << ":" << endl;
        cout << "----------" << endl;
        
        cout << "Enter player's name: ";
        getline(cin, team[x].name);
    
        cout << "Enter player's number: ";
        cin >> team[x].number;
        
        do {
            cout << "Enter points scored by player: ";
            cin >> team[x].score;
            valid = validateInput(team[x].score);
        } while (!valid);

        cin.ignore();
        cout << endl;
    }
}






// Definition of function validateInput

bool validateInput(const int score) {
    if (score < 0) {
        cout << "Invalid inpute: score cannot be less than 0." << endl;
        return false;
    }
    return true;
}






// Definition of function display

void display(const PlayerData team[]) {
    int top;
    
    cout << "\n          GAME SUMMARY" << endl;
    cout << "--------------------------------" << endl;
    cout << right << setw(4) << " NO";
    cout << setw(5);
    cout << left << setw(15) << "NAME";
    cout << right << setw(5) << "SCORE" << endl;
    
    for (int x = 0; x < SIZE; x++) {
        cout << right << setw(4) << team[x].number;
        cout << setw(5);
        cout << left << setw(15) << team[x].name;
        cout << right << setw(5) << team[x].score << endl;
    }
    
    cout << "\nTotal team points: " << calcTotal(team) << endl;
    top = topScorer(team);
    cout << "Top score by player: " << team[top].score << " (" << team[top].name << ")\n";
}






// Definition of function calcTotRain

int calcTotal(const PlayerData team[]) {
    int sum = 0;
    
    for (int x = 0; x < SIZE; x++) {
        sum += team[x].score;
    }
    
    return sum;
}






// Definition of function topScorer

int topScorer(const PlayerData team[]) {
    int top = team[0].score, index = 0;
        
    for (int x = 1; x < SIZE; x++) {
        if (team[x].score > top) {
            top = team[x].score;
            index = x;
        }
    }
    return index;
}


/*
 
 Player #1:
 ----------
 Enter player's name: Matthew
 Enter player's number: 1
 Enter points scored by player: 1

 Player #2:
 ----------
 Enter player's name: Mark
 Enter player's number: 2
 Enter points scored by player: 2

 Player #3:
 ----------
 Enter player's name: Luke
 Enter player's number: 3
 Enter points scored by player: 3

 Player #4:
 ----------
 Enter player's name: John
 Enter player's number: 4
 Enter points scored by player: 4

 Player #5:
 ----------
 Enter player's name: Genesis
 Enter player's number: 5
 Enter points scored by player: 0

 Player #6:
 ----------
 Enter player's name: Exodus
 Enter player's number: 6
 Enter points scored by player: -2
 Invalid inpute: score cannot be less than 0.
 Enter points scored by player: 2

 Player #7:
 ----------
 Enter player's name: Leviticus
 Enter player's number: 7
 Enter points scored by player: 3

 Player #8:
 ----------
 Enter player's name: Mary
 Enter player's number: 8
 Enter points scored by player: 5

 Player #9:
 ----------
 Enter player's name: Magdalene
 Enter player's number: 9
 Enter points scored by player: 5

 Player #10:
 ----------
 Enter player's name: Esther
 Enter player's number: 10
 Enter points scored by player: 1

 Player #11:
 ----------
 Enter player's name: The Notorious RBG
 Enter player's number: 11
 Enter points scored by player: 7

 Player #12:
 ----------
 Enter player's name: Revelations
 Enter player's number: 12
 Enter points scored by player: 0


           GAME SUMMARY
 --------------------------------
   NO     NAME           SCORE
    1     Matthew            1
    2     Mark               2
    3     Luke               3
    4     John               4
    5     Genesis            0
    6     Exodus             2
    7     Leviticus          3
    8     Mary               5
    9     Magdalene          5
   10     Esther             1
   11     The Notorious RBG  7
   12     Revelations        0

 Total team points: 33
 Top score by player: 7 (The Notorious RBG)
 Program ended with exit code: 0
 
 */

/*
 
 Program illustrates data structures.
 
 C11_03.cpp
 Starting Out/C11
 
 Created by nyccowgirl on 10/10/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <string>
using namespace std;


struct MovieData
{
    string title;
    string director;
    string producer;
    int year;
};

int main(int argc, const char * argv[]) {
    MovieData movie;
    
    cout << "Enter the following data about your\n";
    cout << "favorite move.\n";
    cout << "Name: ";
    getline(cin, movie.title);
    cout << "Director: ";
    getline(cin, movie.director);
    cout << "Producer: ";
    getline(cin, movie.producer);
    cout << "Year of release: ";
    cin >> movie.year;
    cout << "\nHere is data on your favorite movie:\n";
    cout << "Title: " <<  movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Producer: " << movie.producer << endl;
    cout << "Year of release: " << movie.year << endl;
    return 0;
}


/*
 
 Enter the following data about your
 favorite move.
 Name: The Princess Bride
 Director: Rob Reiner
 Producer: Disney
 Year of release: 1983
 
 Here is data on your favorite movie:
 Title: The Princess Bride
 Director: Rob Reiner
 Producer: Disney
 Year of release: 1983
 Program ended with exit code: 0
 
 */

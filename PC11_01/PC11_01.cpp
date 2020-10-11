/*
 MOVIE DATA
 
 Write a function that uses a structure named MovieData to store information about a movie.
 The program should create two MovieData variables, store values in their members, and pass
 each one, in turn, to a function that displays the information about the movie in a clearly
 formatted manner.
 
 PC11_01.cpp
 Staring Out/C11
 
 Created by nyccowgirl on 10/11/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;


struct MovieData
{
    string title;
    string director;
    int year;
    int time;
};


void display(const MovieData &movie);

int main(int argc, const char * argv[]) {
    MovieData movie1 = {"The Princess Bride", "Rob Reiner", 1981, 93};
    MovieData movie2 = {"Titanic", "James Cameron", 1995, 140};

    cout << "Movie 1" << endl;
    cout << "-------" << endl;
    display(movie1);
    cout << "\nMovie 2" << endl;
    cout << "-------" << endl;
    display(movie2);
    return 0;
}






// Definition of function display

void display(const MovieData &movie) {
    cout << "Title: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Year Released: " << movie.year << endl;
    cout << "Running Time (in minutes): " << movie.time << endl;
}


/*
 
 Movie 1
 -------
 Title: The Princess Bride
 Director: Rob Reiner
 Year Released: 1981
 Running Time (in minutes): 93

 Movie 2
 -------
 Title: Titanic
 Director: James Cameron
 Year Released: 1995
 Running Time (in minutes): 140
 Program ended with exit code: 0
 
 */

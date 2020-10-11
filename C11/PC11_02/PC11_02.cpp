/*
 MOVIE PROFIT
 
 Modify the Movie Data program written for PC11_01 to include two additional members that
 hold the movie's production costs and first-year revenues. Modify the function that
 displays the movie data to display the title, director, release year, running time and
 first year's profit or loss.
 
 PC11_02.cpp
 Staring Out/C11
 
 Created by nyccowgirl on 10/11/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <iomanip>
using namespace std;


struct MovieData
{
    string title;
    string director;
    int year;
    int time;
    double costs;
    double revenueYr1;
};


void display(const MovieData &movie);


int main(int argc, const char * argv[]) {
    MovieData movie1 = {"The Princess Bride", "Rob Reiner", 1981, 93, 1472832.21, 2222222};
    MovieData movie2 = {"Titanic", "James Cameron", 1995, 140, 4573978.57, 5555555};

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
    cout << "First year's profit or loss: $";
    cout << fixed << setprecision(2) << movie.revenueYr1 - movie.costs << endl;
}


/*
 
 Movie 1
 -------
 Title: The Princess Bride
 Director: Rob Reiner
 Year Released: 1981
 Running Time (in minutes): 93
 First year's profit or loss: $749389.79

 Movie 2
 -------
 Title: Titanic
 Director: James Cameron
 Year Released: 1995
 Running Time (in minutes): 140
 First year's profit or loss: $981576.43
 Program ended with exit code: 0
 
 */

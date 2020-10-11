/*
 CORPORATE SALES DATA
 
 Write a program that uses a structure to store data on a company division. The program
 should use four variables of this structure. Each variable shoudl represent one of the
 following divisions: East, West, North and South. The user should bbe asked for the four
 quarters' sales figures for each division. Each division''s total and average sales should
 be calculated and stored in the appropriate member of each structure variable. These
 figures should then be displayed on the screen.
 
 PC11_03.cpp
 Staring Out/C11
 
 Created by nyccowgirl on 10/11/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <iomanip>
using namespace std;


const int SIZE = 4;


struct CorpData
{
    string division;
    double salesQ1;
    double salesQ2;
    double salesQ3;
    double salesQ4;
    double salesTotal;
    double salesAvg;
};


void getData(CorpData &div);
bool validateInput(const double sales);
void calcAvg(CorpData &div);
void displayData(CorpData &div);


int main(int argc, const char * argv[]) {
    CorpData east = {"East"};
    CorpData west = {"West"};
    CorpData north = {"North"};
    CorpData south = {"South"};
    
    getData(east);
    calcAvg(east);
    displayData(east);
    getData(west);
    calcAvg(west);
    displayData(west);
    getData(north);
    calcAvg(north);
    displayData(north);
    getData(south);
    calcAvg(south);
    displayData(south);
    return 0;
}






// Definition of function getData

void getData(CorpData &div) {
    bool valid;
    
    cout << div.division << endl;
    cout << "-----" << endl;
    
    do {
        cout << "Enter sales for Q1: ";
        cin >> div.salesQ1;
        valid = validateInput(div.salesQ1);
    } while (!valid);

    do {
        cout << "Enter sales for Q2: ";
        cin >> div.salesQ2;
        valid = validateInput(div.salesQ1);
    } while (!valid);

    do {
        cout << "Enter sales for Q3: ";
        cin >> div.salesQ3;
        valid = validateInput(div.salesQ1);
    } while (!valid);
    
    do {
        cout << "Enter sales for Q4: ";
        cin >> div.salesQ4;
        valid = validateInput(div.salesQ1);
    } while (!valid);
    cout << endl;
}






// Definition of function validateInput

bool validateInput(const double sales) {
    if (sales < 0) {
        cout << "Sales cannot be less than 0." << endl;
        return false;
    } else {
        return true;
    }
}






// Definition of function calcAvg

void calcAvg(CorpData &div) {
    div.salesTotal = div.salesQ1 + div.salesQ2 + div.salesQ3 + div.salesQ4;
    div.salesAvg = div.salesTotal / SIZE;
}






// Definition of function displayData

void displayData(CorpData &div) {
    cout << fixed << setprecision(2);
    cout << "Total sales: " << div.salesTotal << endl;
    cout << "Average sales per quarter: " << div.salesAvg << endl;
    cout << endl;
}


/*
 
 East
 -----
 Enter sales for Q1: 11
 Enter sales for Q2: 22
 Enter sales for Q3: 33
 Enter sales for Q4: 44

 Total sales: 110.00
 Average sales per quarter: 27.50

 West
 -----
 Enter sales for Q1: 22
 Enter sales for Q2: 33
 Enter sales for Q3: 44
 Enter sales for Q4: 55

 Total sales: 154.00
 Average sales per quarter: 38.50

 North
 -----
 Enter sales for Q1: -33
 Sales cannot be less than 0.
 Enter sales for Q1: 33
 Enter sales for Q2: 44
 Enter sales for Q3: 55
 Enter sales for Q4: 66

 Total sales: 198.00
 Average sales per quarter: 49.50

 South
 -----
 Enter sales for Q1: 88
 Enter sales for Q2: 77
 Enter sales for Q3: 66
 Enter sales for Q4: 55

 Total sales: 286.00
 Average sales per quarter: 71.50

 Program ended with exit code: 0
 
 */

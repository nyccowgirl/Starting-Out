/*
 MULTIPLE STOCK SALES
 
 Program calculates and displays profit from multiple sales of stocks.
 
 PC6_20.cpp
 Starting Out/C06
 
 Created by nyccowgirl on 9/20/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <iomanip>
using namespace std;

void getStockData(int &shares, double &buy, double &buyCom, double &sale, double &saleCom);
double calcProfit(int shares, double buy, double buyCom, double sale, double saleCom);


int main(int argc, const char * argv[]) {
    int numStocks, stock;
    double purchPrice, salePrice, purchCom, saleCom, totalProfit = 0;
    
    do {
        cout << "Enter the number of stocks that were sold: ";
        cin >> numStocks;
        
        if (numStocks < 1) {
            cout << "Invalid input: Number of stocks sold cannot be less than 1." << endl;
        }
    } while (numStocks < 1);
    
    for (int count = 1; count <= numStocks; count++) {
        cout << "\nInformation for Stock " << count << ":" << endl;
        cout << "------------------------" << endl;
        getStockData(stock, purchPrice, purchCom, salePrice, saleCom);
        totalProfit += calcProfit(stock, purchPrice, purchCom, salePrice, saleCom);
    }
    
    cout << fixed << setprecision(2);
    
    if (totalProfit >= 0) {
        cout << "Total profit from the sale of the " << numStocks;
        cout << " stock(s) is $" << totalProfit << "." << endl;
    } else {
        cout << "Total loss from the sale of the " << numStocks;
        cout << " stock(s) is -$" << -totalProfit << "." << endl;
    }

    return 0;
}






// Definition of function getStockData. Function asks user for number of shares, purchase
// price, purchase commission, sales price and sales commission for stock sold, and passes
// them as reference variables.

void getStockData(int &shares, double &buy, double &buyCom, double &sale, double &saleCom) {
    do {
        cout << "Enter the number of shares sold: ";
        cin >> shares;
        
        if (shares < 1) {
            cout << "Invalid input: Number of shares cannot be less than 1." << endl;
        }
    } while (shares < 1);
    
    do {
        cout << "Enter the sales price: ";
        cin >> sale;
        
        if (sale < 0) {
            cout << "Invalid input: Sale price cannot be less than 0." << endl;
        }
    } while (sale < 0);
    
    do {
        cout << "Enter the sales commission: ";
        cin >> saleCom;
        
        if (saleCom < 0) {
            cout << "Invalid input: Sales commission cannot be less than 0." << endl;
        }
    } while (saleCom < 0);
    
    do {
        cout << "Enter the purchase price: ";
        cin >> buy;
        
        if (buy < 0) {
            cout << "Invalid input: Purchase price cannot be less than 0." << endl;
        }
    } while (buy < 0);
    
    do {
        cout << "Enter the purchase commission: ";
        cin >> buyCom;
        
        if (buyCom < 0) {
            cout << "Invalid input: Purchase commission cannot be less than 0." << endl;
        }
    } while (buyCom < 0);
}






// Definition of function calcProfit. Function passes in number of shares, purchase price,
// purchase commission, sales price and sales commission and returns the profit or loss.

double calcProfit(int shares, double buy, double buyCom, double sale, double saleCom) {
    return (shares * (sale - buy)) - saleCom - buyCom;
}


/*
 
 Enter the number of stocks that were sold: 3

 Information for Stock 1:
 ------------------------
 Enter the number of shares sold: 10
 Enter the sales price: 5
 Enter the sales commission: 2
 Enter the purchase price: 4.5
 Enter the purchase commission: 1

 Information for Stock 2:
 ------------------------
 Enter the number of shares sold: 15
 Enter the sales price: 25
 Enter the sales commission: 3
 Enter the purchase price: 30
 Enter the purchase commission: 4

 Information for Stock 3:
 ------------------------
 Enter the number of shares sold: 25
 Enter the sales price: 4
 Enter the sales commission: 1
 Enter the purchase price: 3
 Enter the purchase commission: 1
 Total loss from the sale of the 3 stock(s) is -$57.00.
 Program ended with exit code: 0
 
 Enter the number of stocks that were sold: 2

 Information for Stock 1:
 ------------------------
 Enter the number of shares sold: 50
 Enter the sales price: 40
 Enter the sales commission: 5
 Enter the purchase price: 35
 Enter the purchase commission: 3.5

 Information for Stock 2:
 ------------------------
 Enter the number of shares sold: 100
 Enter the sales price: 6
 Enter the sales commission: 2
 Enter the purchase price: 4.5
 Enter the purchase commission: 1
 Total profit from the sale of the 2 stock(s) is $388.50.
 Program ended with exit code: 0
 
 */

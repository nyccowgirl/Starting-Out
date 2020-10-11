/*
 STOCK PROFIT
 
 Program calculates and displays profit from the sale of a stock.
 
 PC6_19.cpp
 Starting Out/C6
 
 Created by nyccowgirl on 9/20/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <iomanip>
using namespace std;


double calcProfit(int shares, double buy, double buyCom, double sale, double saleCom);


int main(int argc, const char * argv[]) {
    int stock;
    double purchPrice, salePrice, purchCom, saleCom, profit;
    
    do {
        cout << "Enter the number of shares sold: ";
        cin >> stock;
        
        if (stock < 1) {
            cout << "Invalid input: Number of shares cannot be less than 1." << endl;
        }
    } while (stock < 1);
    
    do {
        cout << "Enter the sales price: ";
        cin >> salePrice;
        
        if (salePrice < 0) {
            cout << "Invalid input: Sale price cannot be less than 0." << endl;
        }
    } while (salePrice < 0);
    
    do {
        cout << "Enter the sales commission: ";
        cin >> saleCom;
        
        if (saleCom < 0) {
            cout << "Invalid input: Sales commission cannot be less than 0." << endl;
        }
    } while (saleCom < 0);
    
    do {
        cout << "Enter the purchase price: ";
        cin >> purchPrice;
        
        if (purchPrice < 0) {
            cout << "Invalid input: Purchase price cannot be less than 0." << endl;
        }
    } while (purchPrice < 0);
    
    do {
        cout << "Enter the purchase commission: ";
        cin >> purchCom;
        
        if (purchCom < 0) {
            cout << "Invalid input: Purchase commission cannot be less than 0." << endl;
        }
    } while (purchCom < 0);
    
    profit = calcProfit(stock, purchPrice, purchCom, salePrice, saleCom);
    cout << fixed << setprecision(2);
    
    if (profit >= 0) {
        cout << "Total profit from the sale of the stock is $" << profit << "." << endl;
    } else {
        cout << "Total loss from the sale of the stock is -$" << -profit << "." << endl;
    }

    return 0;
}






// Definition of function calcProfit. Function passes in number of shares, purchase price,
// purchase commission, sales price and sales commission and returns the profit or loss.

double calcProfit(int shares, double buy, double buyCom, double sale, double saleCom) {
    return (shares * (sale - buy)) - saleCom - buyCom;
}


/*
 
 Enter the number of shares sold: 123
 Enter the sales price: 60
 Enter the sales commission: 10
 Enter the purchase price: 55
 Enter the purchase commission: 5
 Total profit from the sale of the stock is $600.00.
 Program ended with exit code: 0
 
 Enter the number of shares sold: -123
 Invalid input: Number of shares cannot be less than 1.
 Enter the number of shares sold: 123
 Enter the sales price: 55
 Enter the sales commission: 5
 Enter the purchase price: 60
 Enter the purchase commission: 10
 Total loss from the sale of the stock is -$630.00.
 Program ended with exit code: 0
 
 */

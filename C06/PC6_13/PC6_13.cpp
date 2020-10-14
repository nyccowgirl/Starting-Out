/*
 ORDER STATUS
 
 Program displays order status at Middletown Wholesale Copper Wire Company after obtaining
 number of spools ordered, number of spools in stock and any special shipping and handling
 charges.
 
 PC6_13.cpp
 Starting Out/C06
 
 Created by nyccowgirl on 9/19/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <iomanip>
using namespace std;


const int SH_POOL = 10;                             // Defines global constants
const int RETAIL = 100;


void getData(int &order, int &stock, double &shipping);      // Function prototpypes
void displayOrder(int order, int stock, double shipping = SH_POOL);


int main(int argc, const char * argv[]) {
    int noOrdered, noStock;                         // Holds variables
    double specialShip = -1;
    
    getData(noOrdered, noStock, specialShip);
    displayOrder(noOrdered, noStock, specialShip);
    
    return 0;
}






// Definition of function getData. The functions gets the number of spools ordered, spools
// in stock and any special shipping and handling charges, and passes the data as reference
// variables.

void getData(int &order, int &stock, double &shipping) {
    char response;                                  // Holds response for special shipping
    
    do {
        cout << "Enter the number of spools ordered: ";
        cin >> order;
        
        if (order < 1) {
            cout << "Invalid input: order cannot be less than 1." << endl;
        }
        
    } while (order < 1);

    do {
        cout << "Enter the number of spools in stock: ";
        cin >> stock;
        
        if (stock < 0) {
            cout << "Invalid input: stock cannot be less than 0." << endl;
        }
    } while (stock < 0);
        
    do {
        cout << "Are there any special shipping and handling charges (y/n)? ";
        cin >> response;
        
        if (!(response == 'Y' || response == 'y' || response == 'N' || response == 'n')) {
            cout << "Invalid input!" << endl;
        }
    } while (!(response == 'Y' || response == 'y' || response == 'N' || response == 'n'));
        
    if (response == 'Y' || response == 'y') {
        do {
            cout << "Enter the special shipping and handling charges (per spool): ";
            cin >> shipping;
            
            if (shipping < 0) {
                cout << "Invalid input: shipping & handling cannot be less than 0." << endl;
            }
        } while (shipping < 0);
    }
}






// Definition of function displayOrder. Function passes in number of spools ordered, spools
// in stock and any special shipping and handling charges. It displays the order status,
// including any items ready to ship vs on back order.

void displayOrder(int order, int stock, double shipping) {
    int inventory, toShip;
    double itemTotal, shipTotal;
    
    cout << "\n\nThe Middletown Wholesale Copper Wire Company Order Status" << endl;
    cout << "---------------------------------------------------------" << endl;
    
    inventory = stock - order;
    
    if (inventory >= 0) {
        toShip = order;
        cout << "Spools ready to ship: " << setw(15) << toShip << endl;
    } else {
        toShip = stock;
        cout << "Spools ready to ship: " << setw(15) << toShip << endl;
        cout << "Spools on backorder: " << setw(16) << -inventory << endl;
    }
    
    itemTotal = toShip * RETAIL;
    cout << setprecision(2) << fixed;
    cout << "\n\nSubtotal of copper wiring spools: ";
    cout << setw(15) << "$";
    cout << itemTotal << endl;
    cout << "Total shipping and handling charges: ";

    if (shipping >= 0) {
        shipTotal = toShip * shipping;
    } else {
        shipTotal = toShip * SH_POOL;
    }
    
    cout << setw(13) << "$";
    cout << shipTotal << endl;
    cout << "Total: ";
    cout << setw(42) << "$";
    cout << itemTotal + shipTotal << endl;
}


/*
 
 Enter the number of spools ordered: 500
 Enter the number of spools in stock: 250
 Are there any special shipping and handling charges (y/n)? y
 Enter the special shipping and handling charges (per spool): 5


 The Middletown Wholesale Copper Wire Company Order Status
 ---------------------------------------------------------
 Spools ready to ship:             250
 Spools on backorder:              250


 Subtotal of copper wiring spools:               $25000.00
 Total shipping and handling charges:             $1250.00
 Total:                                          $26250.00
 Program ended with exit code: 0
 
 Enter the number of spools ordered: 150
 Enter the number of spools in stock: -10
 Invalid input: stock cannot be less than 0.
 Enter the number of spools in stock: 175
 Are there any special shipping and handling charges (y/n)? n


 The Middletown Wholesale Copper Wire Company Order Status
 ---------------------------------------------------------
 Spools ready to ship:             150


 Subtotal of copper wiring spools:               $15000.00
 Total shipping and handling charges:             $1500.00
 Total:                                          $16500.00
 Program ended with exit code: 0
 
 */

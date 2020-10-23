/*
 WIDGET FACTORY
 
 Design a class for a widget manufacturing plant. Assuming that 10 widgets may be produced
 each hour, the class object will calculate how many days it will take to produce any
 number of widgets. (The plant operates two shifts of eight hours each per day.) Write a
 program that asks the user for the number of widgets that have been ordered and then
 displays the number of days it will take to produce them.
 
 PC13_07.cpp
 Starting Out/C13
 
 Created by nyccowgirl on 10/23/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;


class Widget
{
 public:
    Widget(int inNum = 0) {
        number = inNum;
    }
    void setWidg();
    double calcProdTime() const {
        return (static_cast<double>(number) / dailyProd);
    }

private:
    int number;
    int dailyProd = (10 * 2 * 8);
};






void Widget::setWidg() {
    do {
        cout << "Enter the number of widgets being ordered: ";
        cin >> number;
        
        if (number < 0) {
            cout << "Invalid input: order cannot be less than 0." << endl;
        }
    } while (number < 0);

}






int main(int argc, const char * argv[]) {
    Widget order;
    
    order.setWidg();
    cout << "Length of time in days to produce: " << order.calcProdTime() << endl;
    
    return 0;
}


/*
 
 Enter the number of widgets being ordered: -500
 Invalid input: order cannot be less than 0.
 Enter the number of widgets being ordered: 500
 Length of time in days to produce: 3.125
 Program ended with exit code: 0
 
 */

/*
 EMPLOYEE CLASS
 
 Write a class named Employee that contains name, idNumber, department and position. The
 class should have default and parameter constructors. Write appropriate mutator functions
 that store values in these member variables and assessor functions that return the values
 in these member variables. Once you have written the class, write a separate program that
 creates three Employee objects. The program should store this data in three objects and
 then display the data for each employee on the screen
 
 PC13_02.cpp
 Starting Out/C13
 
 Created by nyccowgirl on 10/19/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
#include <iomanip>
using namespace std;


class Employee
{
 public:
    Employee() {
        name = department = position = "";
        idNumber = 0;
    }
    Employee(string empName, int empID) {
        name = empName;
        idNumber = empID;
        department = position = "";
    }
    Employee(string empName, int empID, string empDpt, string empPos) {
        name = empName;
        idNumber = empID;
        department = empDpt;
        position = empPos;
    }
    void setName(string empName) {
        name = empName;
    }
    void setID(int empID) {
        idNumber = empID;
    }
    void setDpt(string empDpt) {
        department = empDpt;
    }
    void setPos(string empPos) {
        position = empPos;
    }
    void print() const;

private:
    string name;
    int idNumber;
    string department;
    string position;
};






// Definition of class function print

void Employee::print() const  {
    cout << setw(15) << name << setw(7) << idNumber << setw(15) << department;
    cout << setw(15) << position << endl;
}





int main(int argc, const char * argv[]) {
    Employee obj1("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee obj2("Mark Jones", 39119, "IT", "Programmer");
    Employee obj3("Joy Rogers", 81744, "Manufacturing", "Engineer");
    
    cout << left;
    cout << setw(15) << "Name" << setw(7) << "ID No" << setw(15) << "Department";
    cout << setw(15) << "Position" << endl;
    obj1.print();
    obj2.print();
    obj3.print();
    
    return 0;
}


/*
 
 Name           ID No  Department     Position
 Susan Meyers   47899  Accounting     Vice President
 Mark Jones     39119  IT             Programmer
 Joy Rogers     81744  Manufacturing  Engineer
 Program ended with exit code: 0
 
 */

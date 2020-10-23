/*
 CAR CLASS
 
 Write a class named Car with yearModel, make and speed. In addition, the class should have
 constructor and other member functions. Demonstrate the class in a program that creates a
 Car object, and then calls the accelerate function five times. After each call to the
 accelerate function, get the current speed of the car and display it. Then, call the brake
 function five times. After each call to the brake function, get the current speed of the
 car and display it.
 
 PC13_03.cpp
 Starting Out/C13
 
 Created by nyccowgirl on 10/19/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;


class Car
{
 public:
    Car(int year, string model) {
        yearModel = year;
        make = model;
        speed = 0;
    }
    int getYear() const {
        return yearModel;
    }
    string getMake() const {
        return make;
    }
    int getSpeed() const {
        return speed;
    }
    void accelerate() {
        speed += 5;
    }
    void brake() {
        speed -= 5;
    }

private:
    int yearModel;
    string make;
    int speed;
};




int main(int argc, const char * argv[]) {
    int i, times = 5;
    Car obj(2017, "Lamborghini");
    
    for (i = 0; i < times; i++) {
        obj.accelerate();
        cout << "Current speed with acceleration: " << obj.getSpeed() << endl;
    }
    
    for (i = 0; i < times; i++) {
        obj.brake();
        cout << "Current speed with brake: " << obj.getSpeed() << endl;
    }
    
    return 0;
}


/*
 
 Current speed with acceleration: 5
 Current speed with acceleration: 10
 Current speed with acceleration: 15
 Current speed with acceleration: 20
 Current speed with acceleration: 25
 Current speed with brake: 20
 Current speed with brake: 15
 Current speed with brake: 10
 Current speed with brake: 5
 Current speed with brake: 0
 Program ended with exit code: 0
 
 */

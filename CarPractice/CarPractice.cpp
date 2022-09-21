// CarPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Car.h"

void CarValues(Car car)
{
    std::cout << "Name: " << car.make << " " << car.model << "\n"
        << "Doors: " << car.doors << "\n"
        << "Mileage: " << car.mileage << "\n"
        << "MPG: " << car.mpg << "\n"
        << "Petrol " << car.petrol << "\n";
}

int main()
{
    Car ford;
    Car warthog;
    Car mongoose;

    ford.make = "Ford";
    ford.model = "Focus";
    ford.doors = 4;
    ford.mileage = 100;
    ford.mpg = 1;
    ford.petrol = 12;

    warthog.make = "UNSC";
    warthog.model = "Warthog";
    warthog.doors = 0;
    warthog.mileage = 9999;
    warthog.mpg = 100;
    warthog.petrol = 70;

    mongoose.make = "UNSC";
    mongoose.model = "Mongoose";
    mongoose.doors = 0;
    mongoose.mileage = 5;
    mongoose.mpg = 5;
    mongoose.petrol = 5;

    CarValues(warthog);


}


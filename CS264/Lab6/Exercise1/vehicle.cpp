//Conor COHEN FARRELL 15449588

// Chapter 10 of C++ How to Program
#include <iostream>

using std::cout;
using std::endl;
using std::ostream;

#include "vehicle.h"

Vehicle::Vehicle(const int doors, const int cylinders, string color, double initialFuel, const int transmission)
                : numberOfDoors(doors), numberOfCylinders(cylinders), transmissionType(transmission) {
    setFuelLevel(initialFuel);
    setColor(color);
}

void Vehicle::print() const {
    cout << "\n\tNumber of doors: " << getNumberOfDoors()
         << "\n\tNumber of cylinders: " << getNumberOfCylinders()
         << "\n\tTransmission type: " << getTransmissionType()
         << "\n\tColor: " << getColor()
         << "\n\tFuel level: " << getFuelLevel() << endl;
}

void Vehicle::setColor(string color) {
    vehicleColor = color;
}

void Vehicle::setFuelLevel(double amount) {
    if (amount > 0.0 && amount <= 20.0)
        fuelLevel = amount;
    else
        fuelLevel = 5.0;
}

string Vehicle::getColor() const {
    return vehicleColor;
}

double Vehicle::getFuelLevel() const {
    return fuelLevel;
}

int Vehicle::getTransmissionType() const {
    return transmissionType;
}

int Vehicle::getNumberOfDoors() const {
    return numberOfDoors;
}

int Vehicle::getNumberOfCylinders() const {
    return numberOfCylinders;
}

string Vehicle::getClassName() const {
    return "Vehicle";
}
/**************************************************************************
 * (C) Copyright 1992-2003 by Deitel & Associates, Inc. and Prentice      *
 * Hall. All Rights Reserved.                                             *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/

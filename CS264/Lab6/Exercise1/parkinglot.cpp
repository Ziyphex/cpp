//Conor COHEN FARRELL 15449588

// Chapter 10 of C++ How to Program
#include "parkinglot.h"
#include "vehicle.h"
#include "taxi.h"
#include "truck.h"

#include <vector>

using namespace std;

ParkingLot::ParkingLot() : vehicles(0){
    count = 0;
}

ParkingLot::~ParkingLot() {}

void ParkingLot::addVehicle(Vehicle *v) {
    vehicles.push_back(v);
    count++;
}

void ParkingLot::printVehicles() const {
    for (int i = 0; i < vehicles.size(); i++) {
        vehicles[i] -> horn();
        vehicles[i] -> print();
    }
}

int ParkingLot::getVehicleCount() const {
    return count;
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
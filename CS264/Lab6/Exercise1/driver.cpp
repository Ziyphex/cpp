//Conor COHEN FARRELL 15449588

// Chapter 10 of C++ How to Program
#include <iostream>

using std::cout;
using std::endl;

#include <vector>

using std::vector;

#include "vehicle.h"
#include "taxi.h"
#include "truck.h"
#include "parkinglot.h"

int main() {
    ParkingLot *parkingLot = new ParkingLot;

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            Taxi *cab = new Taxi(i);
            parkingLot -> addVehicle(cab);
            (i % 4 == 0) ? cab -> setCustomers(true) : cab -> setCustomers(false); // This just sets some of them to have customers
        }

        else {
            Truck *mack = new Truck(i);
            parkingLot -> addVehicle(mack);
            (i % 3 == 0) ? mack -> setCargo(true) : mack -> setCargo(false); // This just sets some of them to have cargo
        }
    }

    parkingLot -> printVehicles();
    cout << "There are " << parkingLot -> getVehicleCount() << " vehicles in this parking Lot." << endl;

    return 0;
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
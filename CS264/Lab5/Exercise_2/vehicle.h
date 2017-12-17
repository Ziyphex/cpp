//Conor COHEN FARRELL 15449588
#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
using std::ostream;
#include <string>
using std::string;

class Vehicle {
    public:

        /* Constructor */
        Vehicle(const int, const int, string, double, const int);

        /* Getters */
        int getNumberOfDoors() const;
        int getNumberOfCylinders() const;
        string getColor() const;
        double getFuelLevel() const;
        int getTransmissionType() const;
        string getClassName() const;

        /* Setters */
        void setColor(string);
        void setFuelLevel(double);
        void setClassName(string);

    private:

        /* Private Members */
        const int numberOfDoors;
        const int numberOfCylinders;
        string vehicleColor;
        double fuelLevel;
        const int transmissionType;
        string className;

        /* Printer */
        friend ostream& operator<<(ostream &, const Vehicle &);
};

#endif

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

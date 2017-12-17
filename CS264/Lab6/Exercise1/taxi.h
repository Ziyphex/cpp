//Conor COHEN FARRELL 15449588

// Chapter 10 of C++ How to Program
#ifndef TAXI_H
#define TAXI_H

#include <iostream>

#include "vehicle.h"

class Taxi : public Vehicle {
    public:
        Taxi(double);
        bool hasCustomers() const;
        void setCustomers(bool);
        virtual void print() const;
        virtual void horn() const;
        virtual string getClassName() const;

    private:
        bool customers;
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

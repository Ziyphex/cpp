//Conor COHEN FARRELL 15449588

// Chapter 10 of C++ How to Program
#pragma once

#include <vector>

#include "vehicle.h"

class ParkingLot {
	public:
		ParkingLot();
		virtual ~ParkingLot();

		virtual void addVehicle(Vehicle *);
		virtual	void printVehicles() const;
		virtual	int getVehicleCount() const;

	private:
		std::vector< Vehicle * > vehicles;
		int count;
};
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
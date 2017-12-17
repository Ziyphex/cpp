//Conor COHEN FARRELL 15449588

#include <iostream>
#include "MyComplex.h"

using namespace std;

int main(){
  double r, i;  // basic values
  //take inputs
  cout << "Enter a real number..." << endl;
  cin >> r;

  cout << "Enter an imaginary number..." << endl;
  cin >> i;

  //using the default constructor
  MyComplex a;
  a.print();

  //Constructor
  MyComplex b(r, i);

  cout << b.getReal() <<  " is the real value \n" << b.getImage() << " is the imaginary value" << endl;
  b.print();

  //Set Values
  MyComplex s(25.0, 46.2);
  MyComplex f(30.6, 19.1);
  MyComplex g;

  //Addition Overload
  g = s+f;
  cout << "Addition Overload: ";
  g.print();

  //Subtraction Overload

  g = s-f;
  cout << "Subtraction Overload: ";
  g.print();

  //Multiplication Overload

  g = s*f;
  cout << "Multiplication Overload: ";
  g.print();

  return 0;
}

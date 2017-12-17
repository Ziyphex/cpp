//Conor COHEN FARRELL 15449588

#include <iostream>
#include "MyComplex.h"

using namespace std;

int main(){
  double r, i;
  cout << "Real number..." << endl;
  cin >> r;

  cout << "Imaginary number..." << endl;
  cin >> i;

  //Default Constructor
  MyComplex a;
  a.print();

  //Constructor
  MyComplex b(r, i);

  cout << b.getReal() <<  " = real value \n" << b.getImage() << " = imaginary value" << endl;
  b.print();

  //Set Values
  b.setReal(5.0);
  b.setImage(7.5);
  cout << "New Values Being Used..." << endl;
  b.print();

  //addition
  MyComplex c;
  c = a.Add(b);
  cout << "Addition: c= ";
  c.print();

  //subtraction
  c = a.Subtract(b);
  cout << "Subtraction: c= ";
  c.print();

  //multiplication
  MyComplex d(7.0,8.2);
  c = d.Multiply(b);
  cout << "Multiplication: c= ";
  c.print();

  return 0;
}

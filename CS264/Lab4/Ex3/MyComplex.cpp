//Conor COHEN FARRELL 15449588
#include <iostream>
#include "MyComplex.h"

using namespace std;

//constructor
MyComplex::MyComplex(){
  real = 0.0;
  image = 0.0;
}

//custom constructor
MyComplex::MyComplex(double r, double i){
  real = r;
  image = i;
}

//methods for reals
double MyComplex::getReal(){
  return real;
}

void MyComplex::setReal(double r){
  real = r;
}

//methods for imaginary
double MyComplex::getImage(){
  return image;
}

void MyComplex::setImage(double i){
  image = i;
}

//print everything
void MyComplex::print(){
  cout << real << " + " << image << + "i" << endl;
}

//operator overloading
//addition
MyComplex MyComplex::operator+(MyComplex x){
  MyComplex next;
  next.real = real + x.real;
  next.image = image +  x.image;

  return (next);
}

//Subtration
MyComplex MyComplex::operator-(MyComplex x){
  MyComplex next;
  next.real = real - x.real;
  next.image = image -  x.image;

  return (next);
}

//multiplication
MyComplex MyComplex::operator*(MyComplex x){
  MyComplex next;
  next.real = ((real * x.real) - (image* x.image));
  next.image = ((real *  x.image) + (image * x.real));

  return (next);
}

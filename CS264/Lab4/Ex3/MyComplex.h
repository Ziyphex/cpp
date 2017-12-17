//Conor COHEN FARRELL 15449588
#pragma once

using namespace std;

class MyComplex {
  protected:
    double real;
    double image;
  public:
    double getReal();
    void setReal(double);
    double getImage();
    void setImage(double);
    MyComplex();  //default constructor
    MyComplex(double, double); //take in two double parameters
    MyComplex Add(const MyComplex &z);
    MyComplex Subtract(const MyComplex &z);
    MyComplex Multiply(const MyComplex &z);
    void print();
    MyComplex operator+(MyComplex x);
    MyComplex operator-(MyComplex x);
    MyComplex operator*(MyComplex x);
};

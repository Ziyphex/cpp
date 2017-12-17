//Conor COHEN FARRELL 15449588

#include <iostream>
#include "MyComplex.h"
using namespace std;

MyComplex::MyComplex(){
	real = 0.0;
	imaginary = 0.0;
}
MyComplex::MyComplex(double r, double i){
	real = r;
	imaginary = i;
}

double MyComplex::getReal(){
	return real;
}
double MyComplex::getImage(){
	return imaginary;
}
void MyComplex::setReal(double r){
	real = r;
}
void MyComplex::setImage(double i){
	imaginary = i;
}

MyComplex MyComplex::Add(const MyComplex &z){
	double r = real + z.real;
	double i = imaginary + z.imaginary;
	return MyComplex(r, i);

}
MyComplex MyComplex::Subtract(const MyComplex &z){
	double r = real - z.real;
	double i = imaginary - z.imaginary;
	return MyComplex(r, i);
}
MyComplex MyComplex::Multiply(const MyComplex &z){
	/*
		(a,b) * (c,d) = ((ac - bd), (ad + bc))
	*/
	double r = ((real*z.real) - (imaginary*z.imaginary));
	double i = ((real*z.imaginary) + (imaginary*z.real));
	return MyComplex(r, i);
}

void MyComplex::print(){
	cout << real << " + " << imaginary << "i" << endl;
}

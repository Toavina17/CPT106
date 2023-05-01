#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>
#include <string>
using namespace std;
#pragma once



class complexClass
{
private:
	double x;
	double y;
public:
	complexClass();
	complexClass(double r, double i); //Normal constructor
	complexClass(complexClass& cNum); //copy constructor 
	~complexClass();
	double real(void);
	double imag(void);
	double abs(void);
	double angle(void);
	void display(void);
	void set(int a, int b);
	complexClass plus(complexClass a);
	complexClass minus(complexClass a);
	complexClass multiplication(complexClass a);
	complexClass division(complexClass a);

};

complexClass::complexClass() {
	x = 0;
	y = 0;
};

complexClass::complexClass(double r, double i ) {
	x = r;
	y = i;
};

complexClass::complexClass(complexClass& cNum) {
	x = cNum.x;
	y = cNum.y;
};

complexClass::~complexClass() {
	cout << "Destructor is called" << endl;
};

double complexClass::real(void) {
	return x;
};

double complexClass::imag(void) {
	return y;
};

double complexClass::abs(void) {
	return sqrt(pow(x, 2) + pow(y, 2));
};

double complexClass::angle(void) {
	return atan(y / x / 3.14 * 180);
};

void complexClass::display() {
	cout << x << " + " << y << "i" << endl;
};

void complexClass::set(int a, int b) {
	x = (double) a;
	y = (double) b;
};
complexClass complexClass::plus(complexClass a) {
	complexClass temp;
	x += a.x;
	y += a.y;
	temp.set(x, y);
	return temp;
};
complexClass complexClass::minus(complexClass a) {
	x = x - a.x;
	y = y - a.x;
	complexClass temp;
	temp.set(x, y);
	return temp;
};

complexClass complexClass::multiplication(complexClass a) {
	x = x * a.x - y * a.y;
	y = x * a.y - y * a.x;
	complexClass temp;
	temp.set(x, y);
	return temp;
};
complexClass complexClass::division(complexClass a) {
	x = (x * a.x + y * a.y) / (pow(a.x, 2) + pow(a.y, 2));
	y = (y * a.x - x * a.y) / (pow(a.x, 2) + pow(a.y, 2));
	complexClass temp;
	temp.set(x, y);
	return temp;
};
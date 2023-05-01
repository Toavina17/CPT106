#include <iostream>
#include <cmath>
using namespace std;

class complexClass
{
	double x;
	double y;
public:
	complexClass();
	complexClass(double a, double b) {
		x = a;
		y = b;
	};
	void operator ==(complexClass a);
	void print() {
		cout << x << " + " << y << "i" << endl;
	};
	complexClass operator +(complexClass a);
	complexClass operator -(complexClass a);
	complexClass operator *(complexClass a);
	complexClass operator /(complexClass a);
	//complexClass operator ^(complexClass a);

};

complexClass::complexClass() {
	x = 0;
	y = 0;
}

void complexClass:: operator==(complexClass a) {
	if (x == a.x && y == a.y)
		cout << "The two complex class are equal" << endl;
	else
		cout << "They are not equal" << endl;
};

complexClass complexClass::operator+ (complexClass a) {
	a.x += x;
	a.y += y;
	return a;
};

complexClass complexClass::operator- (complexClass a) {
	x -= a.x;
	y -= a.y;
	return complexClass(x, y);
};

complexClass complexClass::operator* (complexClass a) {
	x = x * a.x - y * a.y;
	y = x * a.y + y * a.x;
	return complexClass(x, y);
};

complexClass complexClass::operator/ (complexClass a) {
	x = (x * a.x + y * a.y) / (pow(a.x, 2) + pow(a.y, 2));
	y = (y * a.x - x * a.y) / (pow(a.x, 2) + pow(a.y, 2));
	return complexClass(x, y);
};


//int main() {
//	complexClass c1 = complexClass(1, 2);
//	complexClass c2 = complexClass(10, 3);
//	c1 = c1.operator+(c2);
//	cout << "Addition : " << endl;
//	c1.print();
//	c1 = c1.operator-(c2);
//	cout << "Soustraction: " << endl;
//	c1.print();
//	c1 = c1.operator*(c2);
//	cout << "Multiplication: " << endl;
//	c1.print();
//	c1 = c1 / c2;
//	cout << "Division: " << endl;
//	c1.print();
//
//	return 0;
//}
#include <iostream>
#include <string>

using namespace std;

class Polygon {
private:
	string color;
	string name;
public:
	Polygon(string name, string color = "red") {
		name = name;
		color = color;
	};
	double virtual area() { return 0.0; }//0 is the default value for the area of a polygon.
	string getColor() {
		return color;
	};
	string getName() {
		return name;
	};
	void virtual print() {
		cout << "Class name: " << endl;
		cout << "Name: " << getName() << endl;
		cout << "Color: " << getColor() << endl;
		cout << "Area: " << area() << endl;
	};
};


class Triangle :public Polygon {
private:
	double a, b, c;
public:
	Triangle(double a, double b, double c, string name = "", string color = ""){
		a = a;
		b = b;
		c = c;	
		name = name;
		color = color;
	};
	double area();
	void print();
};

class Rectangle :public Polygon {
private:
	double a, b;
public:
	Rectangle(double a, double b, string name = "", string color = "");
	double area();
	void print();
};

void operate(Polygon* p) {
	p->print();
}

int main()
{
	Polygon p1("poly-1", "green");
	Triangle t1(3, 4, 5, "triangle-1", "blue");
	Rectangle r1(3, 5, "rectangle-1", "black");
	p1.print();
	t1.print();
	r1.print();
	cout << "\n\nprint out using pointer and virtual functions\n";
	operate(&p1);
	operate(&t1);
	operate(&r1);
	return 0;
}


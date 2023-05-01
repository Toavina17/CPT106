#include "person.h";
#include "Header.h";


struct Time {
	int hour;
	int minute;
	int second;

	/*

	Time(int h, int m, int s) {
		hour = h;
		minute = m;
		second = s;
	};

	Time(int h) {
		hour = h;
		minute = 0;
		second = 0;
	};

	void print() {
		cout << "It is " << hour << ":" << minute << ":" << second << endl;
	};
	*/
};

Time input() {
	Time t;
	cout << "Input hour: ";
	cin >> t.hour;
	cout << "Input minutes: ";
	cin >> t.minute;
	cout << "Input seconds: ";
	cin >> t.second;
	cout << "Time was created!" << endl;
	return t;
};

void output(Time t) {
	cout << t.hour << ":" << t.minute << ":" << t.second << endl;
};

void end_of_day(Time t1) {
	int t, m, s;
	t = 23 - t1.hour;
	m = 59 - t1.minute;
	s = 60 - t1.second;
};

int main() {

	/* 
	// Declaration and initialisation of objects
	person p1;
	person p2(1, "James Bond", 107, 8);
	// Exercise 1: test the methods defined above
	 // Test the method "show_nowhour()"
	p1.show_nowhour();
	p2.show_nowhour();
	// Test the method "set_hour()"
	p1.set_hour("Bill", 7);
	// Test ...
	
	person p3(3, "Ares Hidalgo", 204, 3);
	p3.action();
	p3.show_all();

	
	*/

	Time t = input();
	output(t);

	
	return 0;
}
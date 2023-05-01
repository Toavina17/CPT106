//#pragma once
//#include "Header.h"
//#include "Car.h"
//
//class Person
//{
//	string name;
//	Car* firstcar; // a pointer points to the first car this person owns 
//	Car* currentcar; // a pointer points to the current car on access
//public:
//	Person(string namein, Car* carin = NULL, Car* currentcar = NULL);
//	void set_person_name(string namein);
//	void set_car(Car* carin);
//	void display();
//
//};
//
//Person::Person(string namein, Car* carin = NULL, Car* currentcar = NULL) {
//	name = namein;
//	firstcar = carin;
//	currentcar = currentcar;
//};
//
//void Person::set_person_name(string namein) {
//	name = namein;
//};
//
//void Person::set_car(Car* carin) {
//	currentcar = carin;
//};
//
//void Person::display() {
//	cout << "Name\t" << name << endl;
//	while (currentcar != NULL) {
//		cout << "Car\t" << currentcar << endl;
//	}
//}
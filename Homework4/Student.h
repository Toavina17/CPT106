#pragma once
#include "Header.h"

class Student
{
	private:
		string stuName;
		string stuID;
		int stuAge;
	public:
		Student(); //Default constructor
		Student(string name, string id, int age) {
			stuName = name;
			stuID = id;
			stuAge = age;
		}; //Normal constructor 
		void Input();//Input student¡¯s name, id and age
		void Print();//Print student¡¯s name, id and age
		int getAge();//Return student¡¯s age;

};

Student::Student() {
	stuName = "Unknown";
	stuID = "Not defined";
	stuAge = NULL;
};


void Student::Input() {

	string name, id;
	int age;
	//Student person;
	cout << "Input student's information" << endl;
	cout << "Name: ";
	cin >> name;
	cout << "ID: ";
	cin >> id;
	cout << "Age: ";
	cin >> age;
	stuName = name;
	stuID = id;
	stuAge = age;

};

void Student::Print() {
	cout << "Name: " << stuName << endl;
	cout << "ID: " << stuID << endl;
	cout << "Age: " << stuAge << endl;
};

int Student::getAge() {
	cout << stuName << " is " << stuAge << " years old." << endl;
	return stuAge;
};



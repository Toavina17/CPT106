#pragma once
#include "Header.h";

class person
{
	private:
		int id;
		string name;
		int office;
		int nowhour;
	public:
		person();
		person(int ID, string firstName, int officeNumber, int
			workHour);
		void show_nowhour();
		void set_hour(string Name, int workHour);
		void change_nowhour();
		void change_name(string newName);
		void action();
		void show_all();

};

/* methods definition . . . */

//This is the constructor 
person::person() {
	id = 0;
	name = "Not found";
	office = 0;
	nowhour = 0;
};


person::person(int ID, string firstName, int officeNumber, int workHour) {
	id = ID;
	name = firstName;
	office = officeNumber;
	nowhour = workHour;
}

void person::show_nowhour() {
	cout << "Name: " << name << endl;
	cout << "Worked " << nowhour << " hours." << endl;
}

void person::set_hour(string Name, int workHour) {
	name = Name;
	nowhour = workHour;
}

void person::change_nowhour() {
	int value;
	cout << "New value of nowhour for " << name << ":" << endl;
	cin >> value;
	nowhour = value;
	cout << "Done!" << endl;
}

void person::change_name(string newName) {
	name = newName;
	cout << "The name is changed to " << name << endl;
}

//show all the attributes of a person object
void person::show_all() {
	cout << "Name: " << name << endl;
	cout << "ID: " << id << endl;
	cout << "Office number: " << office << endl;
	cout << "Number of working hours per day: " << nowhour << endl;
}

// A member function to ask the user what to be done
// acting as the central control for all possible methods.

void person::action() {
	int choice;
	string newName;
	cout << "What do you want to do with " << name << "?" << endl;
	cout << "Choose 1 for display, 2 for changing name, 3 for changing nowhour" << endl;
	cin >> choice;
	if (choice == 1) {
		show_nowhour();
	}
	else if (choice == 2) {
		cout << "Choose the new name: " << endl;
		cin >> newName;
		change_name(newName);
	}
	else if (choice == 3) {
		change_nowhour();
	}
}








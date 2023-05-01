#include "Header.h"
#include "Customer.h"
#include "Chef.h"
#include "People.h"
#include "Manager.h"



int main() {

	string name;
	int choice;
	cout << "Welcome to the worst restaurant in the world!" << endl;
	cout << "Please insert your name: " << endl;
	getline(cin, name);
	cout << "Please choose your identity:" << endl;
	cout << "Type 1 if you are a customer" << endl;
	cout << "Type 2 if you are a staff member" << endl;
	cin >> choice;
	cout << "\t----------------------------" << endl;

	if (choice == 1) {
		Customer person = Customer(name);
		int activity = person.Customer_choice();
		person.activity(activity, person);	
		return 0;
	}
	else if (choice == 2) {
		cout << "Type 1 if you are the Chef" << endl;
		cout << "Type 2 if you are the manager" << endl;
		cin >> choice;

		if (choice == 1) {
			//YOU ARE THE CHEF
			Chef person = Chef(name);
			int activity = person.choice();
			person.activity(activity, person);
		}
		else if (choice == 2) {
			Manager person = Manager(name);
			cout << "What do you want to do ?" << endl;			
			int activity = person.choice();
			person.activity(activity);
		}
	}
	return 0;
}
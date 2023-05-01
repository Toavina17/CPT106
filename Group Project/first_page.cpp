#include "Header.h"

//int menu() {
//	string name;
//	cout << "Welcome to a random restaurant!" << endl;
//	cout << "Please insert your name: " << endl;
//	cin >> name;
//	cout << "Please choose your identity:" << endl;
//	cout << "Type 1 if you are a customer" << endl;
//	cout << "Type 2 if you are a staff member" << endl;
//	int choice;
//
//	cin >> choice;
//
//	if (choice == 1) {
//		Customer person;
//		int activity = person.Customer_choice();
//		if (activity == 1) {
//			person.see_menu();
//		}
//		else if (activity == 2) {
//			person.order(); //Sanjeev part
//		}
//		else if (activity == 3) {
//			person.bill(); //Sanjeev part
//		}
//	}
//	else if (choice == 2) {
//		//staff class
//	}
//	else {
//		cout << "Please insert a valid answer (1 or 2)" << endl;
//	}
//	return 0;
//}

int main() {
	string name = "me";
	int a = 1;
	People me(name, a);
	me.see_menu();
}
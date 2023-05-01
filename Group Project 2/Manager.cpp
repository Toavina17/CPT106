#include "Manager.h"
#include "Header.h"
#include "People.h"

int Manager::choice() {
	int n = 0;	
	
	cout << "1. Menu" << endl;
	cout << "2. Exit" << endl;
	cin >> n;
	
	return n;
};

void Manager::activity(int n) {
	if (n == 1) {
		int n;
		cout << "Type 1 to see the menu" << endl;
		cout << "Type 2 to add a dish" << endl;
		cout << "Type 3 to update a dish" << endl;
		cout << "Type 4 to delete a dish" << endl;
		cin >> n;
		if (n == 1) {
			see_menu();
			int n = choice();
			activity(n);
		}
		else if (n == 2) {
			add_menu();
			int n = choice();
			activity(n);
		}
		else if (n == 3) {
			update_a_dish();
			int n = choice();
			activity(n);
		}
		else if (n == 4) {
			erase_menu();
			int n = choice();
			activity(n);
		}
		else {
			cout << "Please insert a valid answer" << endl;
			int n = choice();
			activity(n);
		}
	}
	else if (n == 2) {
		cout << "Thank you for your visit!" << endl;
		exit;
	}
	else { cout << "Please insert a valid number"; 
		int n = choice();
		activity(n);
	};
};



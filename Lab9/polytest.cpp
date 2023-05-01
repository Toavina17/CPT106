//Exercise 2

#include <iostream>
#include <string>
#include "employee.h"
#include "manager.h"

int main()
{
	employee* ptr;
	employee p1("John Burke", 25);
	manager m1("Alice Young", 100, 5000);

	int choice;
	cout << "Choose: \n";
	cout << "1 for printing empolyee's wages; \n";
	cout << "2 for printing manager's salary: \n";
	cin >> choice;

	if (choice == 1)
		ptr = &p1;
	else
		ptr = &m1;

	ptr->print(4);

	system("pause");
	return 0;
}


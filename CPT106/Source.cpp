#include <iostream>;
#include <string>;
#include "Header.h";


int main() {
	/*

	//Write a C++ program to print out your name, age and gender
	//Declare variables
	string name, gender;
	int age;

	//Ask for user input
	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter your age: ";
	cin >> age;
	cout << "Choose your gender:\n A. Male\t B. Female\t C.Other\n ";
	cin >> gender;

	if (gender == "A" || gender == "a") {
		gender = "Male";
	}
	else if (gender == "B" || gender == "b") {
		gender = "Female";
	}
	else if (gender == "C" || gender == "c") {
		gender = "Other";
	}
		


	//Display the output
	cout << "Name:\t" << name << "\n";
	cout << "Age:\t" <<age << "\n";
	cout << "Gender:\t" << gender << "\n";

	//Write a C++ program to calculate the sum of two integers.

	int a, b;

	cout << "Please input INTEGERS ONLY\n";
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;

	int sum = a + b;

	cout << "The sum of the two integers is equal to " << sum << R"(
)";

	return 0;
	*/

	//char c = 100;
	//cout << c;

	char a[5] = { 'H','e','l', 'l','o'};
	char b[6] = { 'H','e','l', 'l','o','\0'};
	char c[] = "hello";

	cout << a << endl;
	cout << b << endl;
	cout << c;
}

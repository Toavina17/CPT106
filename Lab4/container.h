#pragma once
//=======================
// container.h
//=======================
// The so-called inventory of a player in RPG games
// contains two items, heal and magic water
#include <iostream>
#include <string>
using namespace std;

#ifndef _CONTAINER // Conditional compilation
#define _CONTAINER

class container // Inventory
{
	protected:
		int numOfHeal; // number of heal
		int numOfMW; // number of magic water
	public:
		container(); // constuctor
		container(int a, int b); //copy constructor
		container(container& cont); //copy constructor 
		void set(int heal_n, int mw_n); // set the items numbers
		int nOfHeal(); // get the number of heal
		int nOfMW(); // get the number of magic water
		void display(); // display the items;
		bool useHeal(); // use heal
		bool useMW(); // use magic water
};

container::container() {
	numOfHeal = 0;
	numOfMW = 0;
};

container::container(int a, int b) {
	numOfHeal = a;
	numOfMW = b;
};

container::container(container& cont) {
	numOfHeal = cont.numOfHeal;
	numOfMW = cont.numOfMW;
};

void container::set(int heal_n, int mw_n) {
	numOfHeal = heal_n;
	numOfMW = mw_n;
};

int container::nOfHeal() {
	return numOfHeal;
}

int container::nOfMW() {
	return numOfMW;
};

void container::display() {
	cout << "Number of heal: " << numOfHeal << endl;
	cout << "Number of magic water: " << numOfMW << endl;
};

bool container::useHeal() {
	if (numOfHeal > 0) {
		numOfHeal--;
		return 0;
	} else {
		cout << "No more healing potion in the bag" << endl;
		return 1;
	}	
};

bool container::useMW() {
	if (numOfMW > 0) {
		numOfMW--;
		return 0;
	}
	else {
		cout << "No more magic potion in the bag" << endl;
		return 1;
	}
};

#endif







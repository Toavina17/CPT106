#pragma once
#include "Header.h"

class People
{
protected:
	string name;
public:
	People(string n) {
		name = n;
	}; // constructor
	People() { name = "unknown"; };
	string search_dish(string id);
	vector<string> order();
	void see_menu();
	void add_menu();
	void update_a_dish();
	int activity_edit_menu();
	void erase_menu();
	void bill(vector<string> dishes);
};


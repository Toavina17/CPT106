#pragma once
#include "Header.h"

class People
{
public:
	string name;
	int function; 

	People() { name = "Unknown"; function = 1; };
	People(string name, int func) {
		this->name = name; 
		this->function = func;
	}; 
	void see_menu();
	string search_dish(string id);
};


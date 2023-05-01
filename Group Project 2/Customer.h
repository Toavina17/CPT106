#pragma once
#include "Header.h"
#include "People.h"

class Customer : public People
{
public:	
	vector<string> dishes;
	Customer();
	Customer(string n);
	int Customer_choice();
	void activity(int n, Customer person);
};


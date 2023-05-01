#pragma once
#include "Header.h"
#include "People.h"

class Manager : public People
{
public :
	Manager(string n) { name = n; };
	int choice();
	void activity(int n);
};


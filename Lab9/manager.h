#pragma once

#ifndef MANAGER_H
#define MANAGER_H

#include "employee.h"

class manager : public employee
{
	int salary;
public:
	manager(string name = "not given", int pay_rate = 0, int salary = 0);
	virtual int printPay(int a) {
		return salary;
	};
};

#endif

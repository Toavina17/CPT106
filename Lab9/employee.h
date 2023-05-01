#pragma once
#ifndef EMPOLYEE_H
#define EMPOLYEE_H

#include <iostream>
#include <string>
using namespace std;

class employee
{
	string name;
	int pay_rate;
public:
	employee(string name = "not given", int pay_rate = 0);
	virtual int printPay(int a) {
		return pay_rate* a;
	};
	virtual void print(int a) {
		cout << "Name: " << name << endl;
		cout << "Pay rate: " << pay_rate << endl;
		cout << "Pay: " << printPay(a) << endl;
	};
};

#endif

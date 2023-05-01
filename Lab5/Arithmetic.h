#pragma once
#include <iostream>
#include <cmath>
using namespace std;


class Arithmetic
{
private:
	int x;
public:
	int max(int a, int b);
	int max(int a, int b, int c);
	int max(int a[], int n);
};

int Arithmetic::max(int a, int b) {
	a > b ? x = a : x = b;
	return x;
};

int Arithmetic::max(int a, int b, int c) {
	if (a > b) {
		if (a > c) x = a;
		else x = c;
	}
	else {
		if (b > c) x = b;
		else { x = c; };
	}
	return x;
};

int Arithmetic::max(int a[], int n) {
	return 0;
}


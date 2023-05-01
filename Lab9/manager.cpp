#include "manager.h"

manager::manager(string name, int pay_rate, int salary)
	:employee(name, pay_rate)
{
	this->salary = salary;
}
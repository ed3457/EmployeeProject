#pragma once
#include "Employee.h"
class Manager: public Employee
{
private:
	string department; 

public:
	void setDepartment(string d);
	string getDepartment();

	Manager();
	Manager(string n, string p, string a, float s, string d);
};


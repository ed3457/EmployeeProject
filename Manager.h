#pragma once
#include "Employee.h"
class Manager: public Employee
{
private:
	string department; 

public:
	void setDepartment(string d);
	string getDepartment();

};


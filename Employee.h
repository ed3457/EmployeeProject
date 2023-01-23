#pragma once
#include <string>
using namespace std;


class Employee
{
private: 
	string name;
	string position;
	string address; 
	float salary; 


public:

	void setName(string n);
	string getName();

	void setPosition(string p);
	string getPosition();

	void setAddress(string a);
	string getAddress();


	void setSalary(float s);
	float getSalary();


	// constructors 
	Employee();
	Employee(string n, string p, string a, float s); 


};


#pragma once
#include "Person.h"
class Employee :
	public Person
{
	string desig;
	float salary;
public:
	Employee();
	Employee(string desig, float salary, int id, string name, int houseNo, int streetNo, string colony, string city);
	string getEmployee();
	void setEmployee(string desig, float salary, int id, string name, int houseNo, int streetNo, string colony, string city);
	void writeFile();
	static void view();
};


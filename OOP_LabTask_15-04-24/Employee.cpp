#include "Employee.h"
#include <fstream>


Employee::Employee()
{
	desig = "";
	salary = 0.0;
}

Employee::Employee(string desig, float salary, int id, string name, int houseNo, int streetNo, string colony, string city) :Person(id, name, houseNo, streetNo, colony, city)
{
	this->desig = desig;
	this->salary = salary;
}

string Employee::getEmployee()
{
	return getPerson() + "\t" + desig + "\t" + to_string(salary);
}

void Employee::setEmployee(string desig, float salary, int id, string name, int houseNo, int streetNo, string colony, string city)
{
	this->desig = desig;
	this->salary = salary;
	setPerson(id, name, houseNo, streetNo, colony, city);
}

void Employee::writeFile()
{
	ofstream fout;
	fout.open("employee.txt", ios::app);
	fout << getEmployee() << endl;
	fout.close();
}

void Employee::view()
{
	ifstream fin;
	fin.open("employee.txt");
	try {
		if (fin.fail()) {
			throw runtime_error("File Can't be opened\n");
		}
	}
	catch (runtime_error & e)
	{
		cout << "Error " << e.what();
	}
	string line;
	while (getline(fin, line))
	{
		cout << line << endl;
	}
	fin.close();
}
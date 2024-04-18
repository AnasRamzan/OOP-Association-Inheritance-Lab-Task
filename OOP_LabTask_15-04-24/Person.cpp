#include "Person.h"
#include <fstream>


Person::Person()
{
	id = 0;
	name = "";
}

Person::Person(int id, string name, int houseNo, int streetNo, string colony, string city)
{
	this->id = id;
	this->name = name;
	address.setAddress(houseNo, streetNo, colony, city);
}

void Person::setPerson(int id, string name, int houseNo, int streetNo, string colony, string city)
{
	this->id = id;
	this->name = name;
	address.setAddress(houseNo, streetNo, colony, city);
}

string Person::getPerson()
{
	return to_string(id) + "\t" + name + "\t" + address.getAddress();
}

void Person::writeFile()
{
	ofstream fout;
	fout.open("person.txt", ios::app);
	fout << getPerson() << "\n";
	fout.close();
}

void Person::view()
{
	ifstream fin;
	fin.open("person.txt");
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

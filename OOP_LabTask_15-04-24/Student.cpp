#include "Student.h"
#include <fstream>


Student::Student()
{
	semester = 1;
	cgpa = 4.0;
}

Student::Student(int semester, float cgpa, int id, string name, int houseNo, int streetNo, string colony, string city):Person(id, name, houseNo, streetNo, colony, city)
{
	this->semester = semester;
	this->cgpa = cgpa;
}

string Student::getStudent()
{
	return getPerson() + "\t" + to_string(semester) + "\t" + to_string(cgpa);
}

void Student::setStudent(int semester, float cgpa, int id, string name, int houseNo, int streetNo, string colony, string city)
{
	this->semester = semester;
	this->cgpa = cgpa;
	setPerson(id, name, houseNo, streetNo, colony, city);
}

void Student::writeFile()
{
	ofstream fout;
	fout.open("student.txt", ios::app);
	fout << getStudent() << endl;
	fout.close();
}

void Student::view()
{
	ifstream fin;
	fin.open("student.txt");
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

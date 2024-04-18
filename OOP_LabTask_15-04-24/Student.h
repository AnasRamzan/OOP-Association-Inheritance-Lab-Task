#pragma once
#include "Person.h"
class Student:
	public Person
{
	int semester;
	float cgpa;
public:
	Student();
	Student(int semester, float cgpa, int id, string name, int houseNo, int streetNo, string colony, string city);
	string getStudent();
	void setStudent(int semester, float cgpa, int id, string name, int houseNo, int streetNo, string colony, string city);
	void writeFile();
	static void view();
};


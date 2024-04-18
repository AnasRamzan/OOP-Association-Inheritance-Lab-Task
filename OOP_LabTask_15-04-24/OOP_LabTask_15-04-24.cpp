

#include <iostream>
#include"Person.h"
#include"Employee.h"
#include"Student.h"
using namespace std;
int main()
{
	while (true) 
	{
		cout << "1.Add Person\n2.View all Persons\n3.Add Employee\n4.View all Employees\n5.Add Student\n6.View all Students\n";
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			int id, houseNo, streetNo;
			string colony, city, name;
			cout << "Adding Person\n";
			cout << "Enter id of Person:";
			cin >> id;
			cout << "Enter Name:";
			cin >> name;
			cout << "Enter house number:";
			cin >> houseNo;
			cout << "Enter street number:";
			cin >> streetNo;
			cout << "Enter name of colony:";
			cin >> colony;
			cout << "Enter name of city:";
			cin >> city;
			Person p(id, name, houseNo, streetNo, colony, city);
			p.writeFile();
			break;
		}
		case 2:
			cout << "Viewing all persons\n";
			Person::view();
			break;
		case 3:
		{
			int id, houseNo, streetNo;
			string colony, city, name, desig;
			float salary;
			cout << "Adding Employee\n";
			cout << "Enter id of Employee:";
			cin >> id;
			cout << "Enter Name:";
			cin >> name;
			cout << "Enter designation of Employee:";
			cin >> desig;
			cout << "Enter salary:";
			cin >> salary;
			cout << "Enter house number:";
			cin >> houseNo;
			cout << "Enter street number:";
			cin >> streetNo;
			cout << "Enter name of colony:";
			cin >> colony;
			cout << "Enter name of city:";
			cin >> city;
			Employee e(desig, salary, id, name, houseNo, streetNo, colony, city);
			e.writeFile();
			break;
		}
		case 4:
			cout << "Viewing all employees\n";
			Employee::view();
			break;
		case 5:
		{
			int id, houseNo, streetNo, semester;
			string colony, city, name;
			float cgpa;
			cout << "Adding Student\n";
			cout << "Enter id of Student:";
			cin >> id;
			cout << "Enter Name:";
			cin >> name;
			cout << "Enter semester of student studied:";
			cin >> semester;
			cout << "Enter cgpa:";
			cin >> cgpa;
			cout << "Enter house number:";
			cin >> houseNo;
			cout << "Enter street number:";
			cin >> streetNo;
			cout << "Enter name of colony:";
			cin >> colony;
			cout << "Enter name of city:";
			cin >> city;
			Student s(semester, cgpa, id, name, houseNo, streetNo, colony, city);
			s.writeFile();
			break;
		}
		case 6:
			cout << "Viewing all students\n";
			Student::view();
			break;
		default:
			cout << "Invalid Choice\n";
		}
	}
}

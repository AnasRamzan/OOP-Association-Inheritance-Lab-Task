#pragma once
#include <iostream>
#include <string>
using namespace std;
class Address {
	int houseNo;
	int streetNo;
	string colony;
	string city;
public:
	Address() {
		houseNo = 0;
		streetNo = 0;
		colony = "";
		city = "";
	}
	inline string getAddress() {
		return to_string(houseNo) + "\t" + to_string(streetNo) + "\t" + colony + "\t" + city;
	}
	inline void setAddress(int house, int street, string colony, string city) {
		houseNo = house;
		streetNo = street;
		this->colony = colony;
		this->city = city;
	}
	inline void sethouseNo(int h) {
		houseNo = h;
	}
	inline void setstreetNo(int s) {
		streetNo = s;
	}
	inline void setcolony(string c) {
		colony = c;
	}
	inline void setcity(string c) {
		city = c;
	}
};
class Person
{
	int id;
	string name;
	Address address;
public:
	Person();
	Person(int id, string name, int houseNo, int streetNo, string colony, string city);
	void setPerson(int id, string name, int houseNo, int streetNo, string colony, string city);
	string getPerson();
	void writeFile();
	static void view();
};


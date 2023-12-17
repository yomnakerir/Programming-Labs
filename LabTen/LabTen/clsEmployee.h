#pragma once
#include<iostream>
#include "clsPerson.h"
using namespace std;

class clsEmployee : public clsPerson {

	string _title;
	float _salray;
	string _department;

public:

	clsEmployee(int id, string firstName, string secondName, string email, string phone, float salary, string department, string title)
		:clsPerson(id, firstName, secondName, email, phone) {

		_title = title;
		_salray = salary;
		_department = department;
	}

	void setTitle(string title) {
		_title = title;
	}
	string getTitle() {
		return _title;
	}

	void setSalary(float salary) {
		_salray = salary;
	}
	float getSalary() {
		return _salray;
	}

	void setDepartment(string department) {
		_department = department;
	}
	string getDepartment() {
		return _department;
	}

	void print() {

		//clsPerson::print();

		cout << "Info: \n____________________\n";
		cout << "ID : " << getId() << "\nFirst Name : " << getFirstName()
			<< "\nLast Name : " << getSecondName() << "\nFull Name : " << getFullName()
			<< "\nEmail : " << getEmail() << "\nPhone : " << getPhone()
			<< "\nSalary : " << getSalary() << "\nDepartment : " << getDepartment()
			<< "\nTitle : " << getTitle() << "\n____________________\n";

	}

};
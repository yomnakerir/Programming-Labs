#pragma once

#include<iostream>
using namespace std;

class clsPerson {

	int _id;
	string _firstName;
	string _secondName;
	string _email;
	string _phone;

public:


	clsPerson(int id, string firstName, string secondName, string email, string phone) {
		_id = id;
		_firstName = firstName;
		_secondName = secondName;
		_email = email;
		_phone = phone;
	}

	int getId() {
		return _id;
	}

	void setFirstName(string firstName) {
		_firstName = firstName;
	}

	string getFirstName() {
		return _firstName;
	}

	void setSecondName(string secondName) {
		_secondName = secondName;
	}

	string getSecondName() {
		return _secondName;
	}


	void setEmail(string email) {
		_email = email;
	}

	string getEmail() {
		return _email;
	}

	void setPhone(string phone) {
		_phone = phone;
	}

	string getPhone() {
		return _phone;
	}

	string getFullName() {
		return getFirstName() + " " + getSecondName();
	}

	void sendEmail(string subject, string body) {
		cout << "The following message send successfully to email : " << getEmail() << "\n";
		cout << "The Subject : " << subject << "\nThe Body : " << body << "\n";
	}

	void sendSms(string sms) {
		cout << "The following SMS send successfully to phone : " << getPhone() << "\n";
		cout << "The SMS : " << sms << "\n";
	}

	void print() {

		cout << "Info: \n____________________\n";
		cout << "ID : " << getId() << "\nFirst Name : " << getFirstName()
			<< "\nLast Name : " << getSecondName() << "\nFull Name : " << getFullName()
			<< "\nEmail : " << getEmail() << "\nPhone : " << getPhone() << "\n____________________\n";

	}

};


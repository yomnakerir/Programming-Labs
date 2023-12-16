#include <iostream>
using namespace std;
class clsPerson {

	string _name;

public:

	clsPerson(string name) {
		_name = name;
	}

	void setName(string name) {
		_name = name;
	}
	string getName() {
		return _name;
	}

	virtual void print() {
		cout << "Hi, i'm Person ----- My name is : " << getName() << "\n";
	}


};

class clsEmployee : public clsPerson {

public:

	clsEmployee(string name) : clsPerson(name) {}

	void print() {
		cout << "Hi, i'm employee -------- My name is : " << getName() << "\n";
	}

};

class clsStudent : public clsPerson {
public:
	clsStudent(string name) : clsPerson(name) {}

	void print() {
		cout << "Hi, i'm student -------- My name is : " << getName() << "\n";
	}
};

int main()
{
	clsEmployee employee1("Yomna");
	//clsPerson person1("Ahmed");
	clsStudent student1("ziyad");

	//UpCasting
	clsPerson* person1 = &employee1;
	clsPerson* person2 = &student1;

	person1->print();
	person2->print();

}
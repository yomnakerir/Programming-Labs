#include <iostream>
using namespace std;

class clsA {
private:
	int _var1 = 50;

protected:
	int var2 = 60;

public:
	void display() {
		cout << "Hello from first class (class A)\n";
	}
	friend class clsB;
};

class clsB {
private:
	int _num1;
	clsA object1;

protected:
	int _num2;

public:
	void display() {
		cout << "Hello from second class (class B)\n";
		cout << "Var1 is private from class A and its value is : " << object1._var1 << "\n";
		cout << "Var2 is protected from class B and its value is : " << object1.var2 << "\n";
		object1.display();
	}

};

int main()
{

	clsB objectB;
	objectB.display();


}
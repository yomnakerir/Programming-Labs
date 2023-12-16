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

	friend void display();
};

void display() {

	clsA objectA;
	cout << "Hi , This is function that is friend for class A \n\n";
	cout << "Var1 is private in class A and its value is : " << objectA._var1 << "\n";
	cout << "Var2 is protected in class A and its value is : " << objectA.var2 << "\n";
	objectA.display();
}

int main()
{

	display();

}
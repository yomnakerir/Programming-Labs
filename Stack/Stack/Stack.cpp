#include <iostream>
#include<stack>
using namespace std;

int main()
{
	stack <int> numbers;

	for (int i = 10; i < 100; i+=10) {
		numbers.push(i);
	}

	cout << "The Numbers are : \n";

	while (!numbers.empty()) {
		cout << numbers.top() << "    ";

		numbers.pop();
	}
}


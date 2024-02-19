
#include <iostream>
#include<queue>
using namespace std;

int main()
{
    queue <int> numbers;

    for (int i = 10; i <= 100; i += 10) {
        numbers.push(i);
    }

    cout << "The size of queue is : " << numbers.size() << "\n";
    cout << "The numbers in the queue are: \n";

    while (!numbers.empty()) {

        cout << numbers.front() << "   ";

        numbers.pop();
    }
}


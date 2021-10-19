#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
	int age;

	cout << "What is your age? ";
	cin >> age;

	if (age >= 120) {
		cout << "How are you still alive?";
	}
	else if (age >= 18) {
		cout << "Ok you can vote!";
	}
	else
	{
		cout << "No you can't vote!";
	}
}
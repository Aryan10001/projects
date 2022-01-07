#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
	int Enter;
	int age;

	cout << "What you need 'age tester' or 'teenager tester'?" << endl;
	cout << "Type 1 for age tester and 2 for teenager tester" << endl;
	cin >> Enter;
	if (Enter == 1)
	{
		cout << "What is your age? ";
		cin >> age;

		if (age >= 120)
		{
			cout << "How are you still alive?";
		}
		else if (age >= 18)
		{
			cout << "Ok you can vote!";
		}
		else
		{
			cout << "No you can't vote!";
		}
	}
	else if (Enter == 2)
	{
		int age1;

		cout << "What is your age? ";
		cin >> age1;
		if (age1 <= 12)
		{
			cout << "You are not a teenager" << endl;
		}
		else if (age1 >= 13 & age1 <= 18)
		{
			cout << "You are a teenager" << endl;
		}
		else
		{
			cout << "You are not a teenager" << endl;
		}
	}
}
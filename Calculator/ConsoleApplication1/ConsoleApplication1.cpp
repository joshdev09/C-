#include <iostream>
using namespace std;

int main()
{
	char operation;
	int num1, num2;

	cout << "Enter the operation (+, -, *, /): ";
	cin >> operation;

	cout << "Give two number: ";
	cin >> num1 >> num2;

	switch (operation) {
	case '+':
		cout << num1 << "+" << num2 << "=" << num1 + num2;
		break;

	case '-':
		cout << num1 << "-" << num2 << "=" << num1 - num2;
		break;

	case '*':
		cout << num1 << "*" << num2 << "=" << num1 * num2;
		break;

	case '/':
		cout << num1 << "/" << num2 << "=" << num1 / num2;
		break;

	default:
		cout << "Error! Operator is not correct";
		break;
	}

	return 0;
}
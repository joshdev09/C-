#include <iostream>
using namespace std;

int main() {

	int numbers[5];
	int a = 0, solve = 0, sum = 0;
	system("COLOR F0");

	cout << "\n\n";
	cout << "\tAVERAGE GRADE SOLVER";
	cout << "\n\n";

	for (a = 0; a <= 4; a += 1)
	{
		cout << "\tEnter Grade No. " << a + 1 << " : ";
		cin >> a[numbers];
	}

	cout << "\n\n";

	for (a = 0; a <= 4; a += 1)
	{
		sum = sum + a[numbers];
		solve = (sum / 5);
	}

	cout << "\n\n";
	cout << "\tYour average is " << solve << ".";

	if (a >= 75)
	{
		cout << "\n\n";
		cout << "\tYou passed this subject";
	}

	else
	{
		cout << "\n\n";
		cout << "\tYou have failed this subject(s)";
	}

	cout << "\n\n";
	cout << "\tEnd of program";
	cout << "\n\n";

}
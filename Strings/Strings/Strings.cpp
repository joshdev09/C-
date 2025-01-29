#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	char str[100];
	int numbers[9];
	int i = 0, solve = 0, sum = 0;
	
	system("COLOR F0");
	cout << "\n\n";
	
	// Center the text "Enter Name and Grade Solver"
	int consoleWidth = 80;
	string title = "Enter Name and Grade Solver";
	int padding = (consoleWidth - title.length()) / 2;
	cout << setw(padding + title.length()) << title << endl;

	cout << "\n\n";

	cout << "\tEnter your name: ";
	cin.getline(str, 100);

	cout << "\tEnter your Grade & Section: ";
	cin.getline(str, 100);

	cout << "\n\n";

	for (i = 0; i <= 8; i += 1) {
		cout << "\tEnter Grade No." << i + 1 << " : ";
		cin >> i[numbers];
	}

	cout << "\n\n";

	for (i = 0; i <= 8; i += 1) {
		sum = sum + i[numbers];
		solve = (sum / 9);
	}

	cout << "\n\n";
	cout << "\tYour average grade is " << solve << ".";

	if (solve >= 90) {
		cout << "\n\n";
		cout << "\tYour qualified as with honors.";
	}

	if (solve >= 95) {
		cout << "\n\n";
		cout << "\tYour qualified as with high honor.";
	}

	if (solve >= 98) {
		cout << "\n\n";
		cout << "\tYour qualified as wtih highest honor.";
	}

	else  {
		cout << "\n\n";
		cout << "\tYour not qualified as with honors.";
	}

	cout << "\n\n";

	system("Pause");

		cout << "\n\n";
		cout << "\tEnd of Program";
		cout << "\n\n";

		return 0;
}

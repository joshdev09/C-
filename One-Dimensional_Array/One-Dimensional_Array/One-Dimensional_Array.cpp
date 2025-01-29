#include <iostream>
using namespace std;

int main() {

	int score[5] = { 5, 10, 15, 20, 25 };
	int a = 0;

	cout << "\n\n";
	cout << "\tOne-Dimensional Array Demo";
	cout << "\n\n";

	for (a = 0; a < 5; a++) {
		cout << "\tScore[" << a + 1 << "] = " << score[a] << "\n";
	}

	cout << "\n\n";
	system("pause");

	return 0;
}

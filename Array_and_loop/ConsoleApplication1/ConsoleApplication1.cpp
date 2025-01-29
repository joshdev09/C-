#include <iostream>
using namespace std;

int main() {

	string names[5] = { "Joshua", "Jaron", "Jameela", "Lauro", "Mechelle" };

	//loop string
	for (int i = 0; i < 5; i++) {
		cout << i << " = " << names[i] << "\n";
	}

	return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {

	string sentence;
	int NumChars = 0, VowelCount = 0, ConsonantCount = 0;
	int whitespace = 0, digits = 0;
	system("cls");
	system("COLOR F0");
	cout << "\n\n";
	cout << "\t\tVowels, Consonants, Digits, and Whitespace Counter";
	cout << "\n\n";

	cout << "\tEnter a String: ";
	getline(cin, sentence);
	NumChars = sentence.length();

	for (int i = 0; i < NumChars; i++) {
		switch (sentence.at(i))
		{
		case 'a': case 'A':
		case 'e': case 'E':
		case 'i': case 'I':
		case 'o': case 'O':
		case 'u': case 'U':
		VowelCount++;
		break;

		case 'b': case 'B':
		case 'c': case 'C':
		case 'd': case 'D':
		case 'f': case 'F':
		case 'g': case 'G':
		case 'h': case 'H':
		case 'j': case 'J':
		case 'k': case 'K':
		case 'l': case 'L':
		case 'm': case 'M':
		case 'n': case 'N':
		case 'p': case 'P':
		case 'q': case 'Q':
		case 'r': case 'R':
		case 's': case 'S':
		case 't': case 'T':
		case 'v': case 'V':
		case 'w': case 'W':
		case 'x': case 'X':
		case 'y': case 'Y':
		case 'z': case 'Z':
		ConsonantCount++;
		break;

		case ' ':
			whitespace++;
			break;

		case '1': case '2':
		case '3': case '4':
		case '5': case '6':
		case '7': case '8':
		case '9': case '0':
			digits++;
		}
	}

	cout << "\n\n";
	cout << "\n\t=== SUMMARY OF REPORTS ===";
	cout << "\n\n";

	cout << "\n\tNumber of Vowels      :	" << VowelCount << ".";
	cout << "\n\tNumber of Consonants  :	" << ConsonantCount << ".";
	cout << "\n\tNumber of Digits      :	" << digits << ".";
	cout << "\n\tNumber of WhiteSpace  :	" << whitespace << ".";

	cout << "\n\n";
	cout << "\tThankyou for using this Software";
	cout << "\n\n";
	system("PAUSE");
}
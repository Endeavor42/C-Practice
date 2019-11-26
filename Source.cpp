#include <iostream>

using namespace std;

int main()
{
	cout << "Enter a string: ";

	const int SIZE = 1001;
	char inputStr[SIZE];
	cin.getline(inputStr, SIZE);

	cout << "Enter character to search for: ";
	char letter;

	cin >> letter;
	int duplicates = 0;
	for (int i = 0; i < SIZE; i++) {
		if (inputStr[i] == letter) {
			duplicates++;
		}
	}

	cout << "Character \'" << letter << "\' occurs "<< duplicates << " times in the given string" << endl;
	cout << "\"" << inputStr << "\"";

}
/*
Jacob Amerin
CIS 1202 800
7/22/2022
*/

#include <iostream>
using namespace std;

char character(char start, int offset) {
	if (!isalpha(start)) {	//test for valid letter/start a-z or A-Z
		string invalidCharacterExcpeption = "ERROR: Must be a valid letter!";
		throw invalidCharacterExcpeption;
	}
	char result = start + offset;
	return result;
}

int main() {
	char letter = 'z';
	int offset = 23;
	char new_letter;

	try {
		new_letter = character(letter, offset);
		cout << new_letter << endl;
	}
	catch (string invalidCharacterExcpeption) {
		cout << invalidCharacterExcpeption << endl;
	}

}
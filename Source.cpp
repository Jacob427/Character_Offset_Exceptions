/*
Jacob Amerin
CIS 1202 800
7/22/2022
*/

#include <iostream>
using namespace std;

char character(char start, int offset);


int main() {
	char letter = 'A';
	int offset = 23;

	cout << character(letter, offset);


}


char character(char start, int offset) {
	char result = start + offset;
	return result;
}
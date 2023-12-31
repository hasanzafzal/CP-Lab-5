#include <iostream>
using namespace std;

int uppercase(char ch) {
	return ch >= 'a' && ch <= 'z' ? ch - 32 : ch;
}

int main() {
	char ch;
	cout << "Enter a lowercase alphabet: ";
	cin >> ch;
	char upper = uppercase(ch);
	cout << "The uppercase character is: " << upper << endl;
	return 0;
}
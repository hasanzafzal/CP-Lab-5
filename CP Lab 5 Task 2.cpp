#include <iostream>

using namespace std;

 int power(int n, int p = 2) {
	int result = 1;
	for (int i = 0; i < p; i++)
		result *= n;
	return result;
}

int main() {
	int n;
	cout << "Enter an integer: ";
	cin >> n;

	int result = power(n);

	cout << n << " squared is " << result << endl;

	return 0;
}
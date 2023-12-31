#include <iostream>
using namespace std;

int num1() {
	int num1;
	cout << "Enter 4th digit of your number :";
	cin >> num1;
	return num1;
}
int num2() {
	int num2;
	cout << "Enter 3rd digit of your number :";
	cin >> num2;
	return num2;
}
int num3() {
	int num3;
	cout << "Enter 2nd digit of your number :";
	cin >> num3;
	return num3;
}
int num4() {
	int num4;
	cout << "Enter 1st digit of your number :";
	cin >> num4;
	return num4;
}
int main() {
	cout << "Your returned value is : " <<num4()<<num3()<<num2()<<num1() << endl;
	return 0;
}
#include <iostream>
using namespace std;

void displayExponentialNumbers() {
    int num = 2;
    do {
        cout << num << " ";
        num *= 2;
    } while (num <= 512);
    cout << endl;
}

void main() {
    displayExponentialNumbers();
}
#include <iostream>
using namespace std;

void displayNumbers() {
    int num = 7;
    do {
        cout << num << " ";
        num += 7;
    } while (num <= 98);
    cout << endl;
}

void main() {
    displayNumbers();
}
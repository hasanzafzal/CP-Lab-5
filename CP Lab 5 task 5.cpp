#include <iostream>
using namespace std;

int largerDistance(const int& d1, const int& d2) {
    if (d1 > d2) {
        return d1;
    }
    else {
        return d2;
    }
}

int main() {
    int d1_feet, d2_feet;
    float d1_inches, d2_inches;
    cout << "Enter the first distance (feet and inches): ";
    cin >> d1_feet >> d1_inches;
    cout << "Enter the second distance (feet and inches): ";
    cin >> d2_feet >> d2_inches;
    int d1_inches_total = d1_feet * 12 + d1_inches;
    int d2_inches_total = d2_feet * 12 + d2_inches;
    int larger_inches_total = largerDistance(d1_inches_total, d2_inches_total);
    int larger_feet = larger_inches_total / 12;
    float larger_inches = larger_inches_total % 12;
    cout << "The larger distance is: " << larger_feet << " feet " << larger_inches << " inches" << endl;

    return 0;
}
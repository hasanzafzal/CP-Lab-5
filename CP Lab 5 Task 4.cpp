#include <iostream>
using namespace std;

int calculate_charges(int hours) {
    if (hours <= 3) {
        return 200;
    }
    else if (hours <= 24) {
        return 200 + 50 * (hours - 3);
    }
    else {
        return 1000;
    }
}

int main() {
    int hours1, hours2, hours3;
    int charges1, charges2, charges3;
    int total_receipts = 0;
    cout << "Enter the hours parked for customer 1 (in hours): ";
    cin >> hours1;
    cout << "Enter the hours parked for customer 2 (in hours): ";
    cin >> hours2;
    cout << "Enter the hours parked for customer 3 (in hours): ";
    cin >> hours3;
    charges1 = calculate_charges(hours1);
    charges2 = calculate_charges(hours2);
    charges3 = calculate_charges(hours3);
    cout << "\nCustomer\tHours Parked\tCharge" << endl;
    cout << "-------\t------------\t-------" << endl;
    cout << "1\t" << hours1 << "\t\tRs." << charges1 / 100.0 << endl;
    cout << "2\t" << hours2 << "\t\tRs." << charges2 / 100.0 << endl;
    cout << "3\t" << hours3 << "\t\tRs." << charges3 / 100.0 << endl;
    total_receipts = charges1 + charges2 + charges3;
    cout << "\nTotal Receipts:\t\tRs." << total_receipts / 100.0 << endl;

    return 0;
}
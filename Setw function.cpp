#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Header
    cout << left << setw(10) << "Roll"
         << left << setw(15) << "Name"
         << left << setw(10) << "Marks" << endl;

    // Data Rows
    cout << left << setw(10) << 10
         << left << setw(15) << "Limon"
         << left << setw(10) << 87 << endl;

    cout << left << setw(10) << 03
         << left << setw(15) << "Nijhum"
         << left << setw(10) << 92 << endl;

    cout << left << setw(10) << 40
         << left << setw(15) << "Nur"
         << left << setw(10) << 75 << endl;

    cout << left << setw(10) << 33
         << left << setw(15) << "Eshan"
         << left << setw(10) << 80 << endl;

    return 0;
}


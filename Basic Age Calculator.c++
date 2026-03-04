#include <iostream>
using namespace std;

int main() {
    int birthYear, currentYear;

    cout << "Enter birth year: ";
    cin >> birthYear;
    cout << "Enter current year: ";
    cin >> currentYear;

    cout << "Your age: " << currentYear - birthYear << endl;

    return 0;
}

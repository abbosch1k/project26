#include <iostream>
using namespace std;

int main() {
    double part, total;

    cout << "Enter part value: ";
    cin >> part;
    cout << "Enter total value: ";
    cin >> total;

    if(total != 0)
        cout << "Percentage: " << (part / total) * 100 << "%\n";
    else
        cout << "Total cannot be zero!\n";

    return 0;
}

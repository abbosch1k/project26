#include <iostream>
using namespace std;

int main() {
    double goal, saved;

    cout << "Savings goal: ";
    cin >> goal;
    cout << "Amount saved: ";
    cin >> saved;

    if(saved >= goal)
        cout << "Goal reached!\n";
    else
        cout << "You need " << goal - saved << " more.\n";

    return 0;
}

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    string quotes[] = {
        "Stay hungry, stay foolish.",
        "Code never lies.",
        "Practice makes perfect.",
        "C++ is powerful."
    };

    int index = rand() % 4;
    cout << "Quote: " << quotes[index] << endl;

    return 0;
}

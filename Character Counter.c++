#include <iostream>
using namespace std;

int main() {
    string text;
    cout << "Enter text: ";
    getline(cin, text);

    cout << "Character count: " << text.length() << endl;
    return 0;
}

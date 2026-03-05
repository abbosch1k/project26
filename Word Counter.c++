#include <iostream>
using namespace std;

int main() {
    string text;
    int words = 1;

    cout << "Enter sentence: ";
    getline(cin, text);

    for(char c : text)
        if(c == ' ')
            words++;

    cout << "Word count: " << words << endl;

    return 0;
}

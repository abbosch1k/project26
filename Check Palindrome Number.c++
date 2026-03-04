#include <iostream>
using namespace std;

int main() {
    int num, original, reversed = 0;

    cout << "Enter number: ";
    cin >> num;

    original = num;

    while(num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    if(original == reversed)
        cout << "Palindrome number\n";
    else
        cout << "Not palindrome\n";

    return 0;
}

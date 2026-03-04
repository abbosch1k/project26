#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secret = rand() % 50 + 1;
    int guess;
    int attempts = 5;

    cout << "Guess number (1-50). You have 5 attempts.\n";

    while(attempts > 0) {
        cin >> guess;

        if(guess == secret) {
            cout << "Correct!\n";
            return 0;
        }

        attempts--;
        cout << "Wrong! Attempts left: " << attempts << endl;
    }

    cout << "Game Over! Number was: " << secret << endl;
    return 0;
}

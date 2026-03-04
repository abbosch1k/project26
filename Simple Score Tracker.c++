#include <iostream>
using namespace std;

int main() {
    int games;
    cout << "How many games: ";
    cin >> games;

    int score, total = 0;

    for(int i = 0; i < games; i++) {
        cout << "Score for game " << i+1 << ": ";
        cin >> score;
        total += score;
    }

    cout << "Total score: " << total << endl;
    cout << "Average score: " << total / games << endl;

    return 0;
}

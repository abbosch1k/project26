#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main() {
    int seconds;
    cout << "Enter seconds: ";
    cin >> seconds;

    for(int i = 1; i <= seconds; i++) {
        cout << "\rElapsed: " << i << " sec";
        cout.flush();
        this_thread::sleep_for(chrono::seconds(1));
    }

    cout << "\nDone!\n";
    return 0;
}

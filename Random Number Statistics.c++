#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int n = 10;
    int min = 100, max = 0, sum = 0;

    cout << "Generated numbers: ";

    for(int i = 0; i < n; i++) {
        int num = rand() % 100;
        cout << num << " ";
        sum += num;
        if(num < min) min = num;
        if(num > max) max = num;
    }

    cout << "\nMin: " << min;
    cout << "\nMax: " << max;
    cout << "\nAverage: " << sum / n << endl;

    return 0;
}

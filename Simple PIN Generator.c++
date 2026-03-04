#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int pin = rand() % 9000 + 1000; 
    cout << "Generated PIN: " << pin << endl;

    return 0;
}

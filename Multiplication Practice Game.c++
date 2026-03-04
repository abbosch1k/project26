#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int a = rand()%10+1;
    int b = rand()%10+1;
    int answer;

    cout << "Solve: " << a << " * " << b << " = ";
    cin >> answer;

    if(answer == a*b)
        cout << "Correct!\n";
    else
        cout << "Wrong! Answer: " << a*b << endl;

    return 0;
}

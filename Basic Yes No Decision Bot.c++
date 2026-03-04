#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    string question;

    cout << "Ask a yes/no question: ";
    getline(cin, question);

    if(rand()%2 == 0)
        cout << "Answer: Yes\n";
    else
        cout << "Answer: No\n";

    return 0;
}

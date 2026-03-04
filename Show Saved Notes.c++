#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream in("notes.txt");
    string line;

    cout << "Saved Notes:\n";

    while(getline(in, line))
        cout << line << endl;

    in.close();
    return 0;
}

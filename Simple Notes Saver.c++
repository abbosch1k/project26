#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream out("notes.txt", ios::app);
    string note;

    cout << "Write a note: ";
    getline(cin, note);

    out << note << endl;
    out.close();

    cout << "Note saved!\n";
    return 0;
}

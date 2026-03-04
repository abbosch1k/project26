#include <iostream>
using namespace std;

int main() {
    int choice;
    double a, b;

    do {
        cout << "\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n0.Exit\nChoice: ";
        cin >> choice;

        if(choice >=1 && choice <=4) {
            cout << "Enter two numbers: ";
            cin >> a >> b;

            if(choice==1) cout << "Result: " << a+b << endl;
            if(choice==2) cout << "Result: " << a-b << endl;
            if(choice==3) cout << "Result: " << a*b << endl;
            if(choice==4) {
                if(b!=0) cout << "Result: " << a/b << endl;
                else cout << "Cannot divide by zero\n";
            }
        }

    } while(choice != 0);

    return 0;
}

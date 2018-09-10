//Author: Payton Donnelly
//Made: 9 - 9 - 18
#include <iostream>

using namespace std;

int main()
{
    string name;
    int size;
    cout << "What is your first name?" << endl;
    cin >> name;
    size = name.length();
    if (size > 15) {
        cout << "Your name is too long for this program. I don't mean to be rude, but your name is at leasst 16 charcters long. Maybe you should change it?" << endl;
    }
    else {
        for (int i = 0; i < size+4; i++) {
            cout << "x";
        }
        cout << "\n";
        cout << "x";
        for (int i = 0; i < size+2; i++) {
            cout << " ";
        }
        cout << "x";
        cout << "\n";
        cout << "x ";
        cout << name;
        cout << " x";
        cout << "\n";
        cout << "x";
        for (int i = 0; i < size+2; i++) {
            cout << " ";
        }
        cout << "x";
        cout << "\n";
        for (int i = 0; i < size+4; i++) {
            cout << "x";
        }
        cout << "\n";

    }

}

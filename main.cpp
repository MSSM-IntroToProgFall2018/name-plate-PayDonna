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

//Ok so bacically make one line just XXXXXXXXXXXXXXXXX up to oh 15 characters?
//Make sure the user knows the name has to be less than or equal to 13 characters
//Hell if I know hwat to do if the name is odd characters
//Then you have a function that sees how many characters are in a string
//Then you have an if else statement of death that decides spacing based on how many characters are in the name
//Then you have another XXXXXXXXXXXXXXXXX


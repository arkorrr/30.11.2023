#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string surnames[5];

    for (int i = 0; i < 5; ++i) 
    {
        cout << "Enter surname:";
        cin >> surnames[i];
    }
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4 - i; ++j) {
            if (surnames[j] > surnames[j + 1]) {
                swap(surnames[j], surnames[j + 1]);
            }
        }
    }

    cout << "Entered last names, sorted alphabetically: " << endl;
    for (int i = 0; i < 5; ++i) {
        cout << surnames[i] << endl;
    }

    return 0;
}
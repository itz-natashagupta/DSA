/*
    Pattern 14 - Alphabet Triangle (n = 5):
    A
    A B
    A B C
    A B C D
    A B C D E
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (char ch = 'A'; ch <= 'A' + i; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }

    return 0;
}

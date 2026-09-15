/*
    Pattern 10 - Hourglass Stars (n = 5):
    *
    **
    ***
    ****
    *****
    ****
    ***
    **
    *
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Upper half (increasing)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) cout << "*";
        cout << endl;
    }

    // Lower half (decreasing)
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) cout << "*";
        cout << endl;
    }

    return 0;
}

/*
    Pattern 13 - Mirror Number Pattern (n = 5):
    1        1
    12      21
    123    321
    1234  4321
    1234554321
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int spaces = 2 * (n - 1);
    for (int i = 1; i <= n; i++) {
        // Left side
        for (int j = 1; j <= i; j++) cout << j;
        // Middle spaces
        for (int j = 0; j < spaces; j++) cout << " ";
        // Right side (mirror)
        for (int j = i; j >= 1; j--) cout << j;
        cout << endl;
        spaces -= 2;
    }

    return 0;
}

/*
    Pattern 9 - Diamond (n = 5):
        *
       ***
      *****
     *******
    *********
    *********
     *******
      *****
       ***
        *
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Upper half (pyramid)
    for (int i = 0; i <= n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) cout << " ";
        for (int j = n - i - 1; j < n + i; j++) cout << "*";
        for (int j = n + i; j < 2 * n - 1; j++) cout << " ";
        cout << endl;
    }

    // Lower half (inverted pyramid)
    for (int i = n; i > 0; i--) {
        for (int j = n - i; j > 0; j--) cout << " ";
        for (int j = 2 * i - 1; j > 0; j--) cout << "*";
        for (int j = n - i - 1; j > 0; j--) cout << " ";
        cout << endl;
    }

    return 0;
}

/*
    Pattern 7 - Pyramid (n = 5):
        *
       ***
      *****
     *******
    *********
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 0; i <= n - 1; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = n - i - 1; j < n + i; j++) {
            cout << "*";
        }
        // Print trailing spaces
        for (int j = n + i; j < 2 * n - 1; j++) {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}

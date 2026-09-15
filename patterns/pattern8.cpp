/*
    Pattern 8 - Inverted Pyramid (n = 5):
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

    for (int i = n; i > 0; i--) {
        // Print leading spaces
        for (int j = n - i; j > 0; j--) {
            cout << " ";
        }
        // Print stars
        for (int j = 2 * i - 1; j > 0; j--) {
            cout << "*";
        }
        // Print trailing spaces
        for (int j = n - i - 1; j > 0; j--) {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}

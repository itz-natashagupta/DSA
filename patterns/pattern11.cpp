/*
    Pattern 11 - Binary Triangle (n = 5):
    1
    0 1
    0 1 0
    1 0 1 0
    1 0 1 0 1
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if ((count % 2) == 0) cout << "1 ";
            else cout << "0 ";
            count++;
        }
        cout << endl;
    }

    return 0;
}

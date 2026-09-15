/*
    Divisors of a Number

    Print all numbers that divide num evenly.

    Example: 12 → 1 2 3 4 6 12
             7  → 1 7
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Divisors of " << num << ": ";
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) cout << i << " ";
    }
    cout << endl;

    return 0;
}

/*
    Reverse a Number

    Example: 12345 → 54321
             1200  → 21
*/

#include <iostream>
using namespace std;

int reverse(int n) {
    int rev = 0, x;
    while (n > 0) {
        x = n % 10;
        rev = (rev * 10) + x;
        n /= 10;
    }
    return rev;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "The reversed number is: " << reverse(number) << endl;

    return 0;
}

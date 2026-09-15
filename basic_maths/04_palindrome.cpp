/*
    Palindrome Number Check

    A number is a palindrome if it reads the same forwards and backwards.
    Example: 121 → Palindrome ✅
             123 → Not a Palindrome ❌
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

    int result = reverse(number);

    if (number == result)
        cout << "YES! " << number << " is a Palindrome." << endl;
    else
        cout << "NO! " << number << " is NOT a Palindrome." << endl;

    return 0;
}

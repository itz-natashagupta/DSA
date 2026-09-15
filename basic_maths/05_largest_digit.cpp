/*
    Largest Digit in a Number

    Example: 3829 → 9
             54761 → 7
*/

#include <iostream>
using namespace std;

int largest_digit(int n) {
    int x, maxDigit = 0;
    while (n > 0) {
        x = n % 10;
        if (maxDigit < x) maxDigit = x;
        n /= 10;
    }
    return maxDigit;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "The largest digit is: " << largest_digit(number) << endl;

    return 0;
}

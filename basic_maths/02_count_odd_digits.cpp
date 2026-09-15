/*
    Count number of ODD digits in a number

    Example: 13579 → 5 odd digits
             12345 → 3 odd digits (1, 3, 5)
*/

#include <iostream>
using namespace std;

int odd_digits(int num) {
    int count = 0;
    while (num > 0) {
        int n = num % 10;
        if ((n % 2) != 0) count++;
        num /= 10;
    }
    return count;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Number of odd digits: " << odd_digits(number) << endl;

    return 0;
}

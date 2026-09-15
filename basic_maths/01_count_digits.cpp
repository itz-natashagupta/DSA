/*
    Count all digits in a number

    Example: 12345 → 5 digits

    Two approaches:
    1. Loop and divide by 10 until 0
    2. Convert to string and use length()
*/

#include <iostream>
using namespace std;

// Approach 1: Loop method
int countDigits_loop(int num) {
    int count = 0;
    while (num > 0) {
        count++;
        num /= 10;
    }
    return count;
}

// Approach 2: String conversion method
int countDigits_string(int num) {
    string s = to_string(num);
    return s.length();
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Digit count (loop method)  : " << countDigits_loop(num) << endl;
    cout << "Digit count (string method): " << countDigits_string(num) << endl;

    return 0;
}

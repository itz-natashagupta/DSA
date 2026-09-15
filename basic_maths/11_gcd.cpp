/*
    GCD - Greatest Common Divisor of Two Numbers

    The GCD is the largest number that divides both a and b.

    Example: GCD(12, 18) = 6
             GCD(7, 5)   = 1
*/

#include <iostream>
using namespace std;

int GCD(int a, int b) {
    int mini = min(a, b);
    int result = 1;
    for (int i = 2; i <= mini; i++) {
        if (a % i == 0 && b % i == 0) result = i;
    }
    return result;
}

int main() {
    int num1, num2;
    cout << "Enter 1st number: ";
    cin >> num1;
    cout << "Enter 2nd number: ";
    cin >> num2;

    cout << "GCD(" << num1 << ", " << num2 << ") = " << GCD(num1, num2) << endl;

    return 0;
}

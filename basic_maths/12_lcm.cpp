/*
    LCM - Lowest Common Multiple of Two Numbers

    LCM is found using the formula: LCM(a, b) = (a × b) / GCD(a, b)

    Example: LCM(4, 6)  = 12
             LCM(7, 5)  = 35
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

    int gcd = GCD(num1, num2);
    int lcm = (num1 * num2) / gcd;

    cout << "GCD(" << num1 << ", " << num2 << ") = " << gcd << endl;
    cout << "LCM(" << num1 << ", " << num2 << ") = " << lcm << endl;

    return 0;
}

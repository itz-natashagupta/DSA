/*
    Armstrong Number Check

    A number is Armstrong if the sum of its digits each raised
    to the power of the number of digits equals the number itself.

    Example: 153 → 1³ + 5³ + 3³ = 1 + 125 + 27 = 153 ✅
             9474 → 9⁴ + 4⁴ + 7⁴ + 4⁴ = 9474 ✅
             123  → Not Armstrong ❌
*/

#include <iostream>
#include <cmath>
using namespace std;

int isArmstrong(int num) {
    string s = to_string(num);
    int len = s.length();
    int x, n = 0, temp = num;
    while (temp > 0) {
        x = temp % 10;
        n += pow(x, len);
        temp /= 10;
    }
    return n;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num == isArmstrong(num))
        cout << num << " is an ARMSTRONG number. ✅" << endl;
    else
        cout << num << " is NOT an ARMSTRONG number. ❌" << endl;

    return 0;
}

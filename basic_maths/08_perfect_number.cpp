/*
    Perfect Number Check

    A number is Perfect if the sum of its proper divisors equals itself.

    Example: 6  → divisors: 1+2+3 = 6 ✅
             28 → divisors: 1+2+4+7+14 = 28 ✅
             12 → divisors: 1+2+3+4+6 = 16 ≠ 12 ❌
*/

#include <iostream>
using namespace std;

bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) sum += i;
    }
    return num == sum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPerfect(num))
        cout << num << " is a PERFECT number. ✅" << endl;
    else
        cout << num << " is NOT a PERFECT number. ❌" << endl;

    return 0;
}

/*
    Prime Number Check

    A number is Prime if it has no divisors other than 1 and itself.

    Example: 7  → Prime ✅
             11 → Prime ✅
             12 → Not Prime ❌ (divisible by 2, 3, 4, 6)

    Optimization: Only check divisors up to sqrt(num)
*/

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number))
        cout << number << " is a PRIME number. ✅" << endl;
    else
        cout << number << " is NOT a PRIME number. ❌" << endl;

    return 0;
}

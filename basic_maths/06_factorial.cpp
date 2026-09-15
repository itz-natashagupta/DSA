/*
    Factorial of a Number

    Example: 5! = 5 × 4 × 3 × 2 × 1 = 120

    Note: Using 'int' works up to n = 12.
          Use 'long long' for larger values (up to n = 20).

    Two approaches:
    1. Recursion
    2. Iterative (while loop)
*/

#include <iostream>
using namespace std;

// Approach 1: Recursion
long long factorial_recursive(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial_recursive(n - 1);
}

// Approach 2: Iterative
long long factorial_iterative(int n) {
    long long fact = 1;
    while (n > 0) {
        fact *= n;
        n--;
    }
    return fact;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Factorial (recursive)  : " << factorial_recursive(number) << endl;
    cout << "Factorial (iterative)  : " << factorial_iterative(number) << endl;

    return 0;
}

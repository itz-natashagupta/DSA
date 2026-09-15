/*
    Fibonacci Number using Recursion

    Sequence: 0 1 1 2 3 5 8 13 21 ...
    Example: fib(6) = 8

    Idea: fib(n) = fib(n-1) + fib(n-2)
          Base cases: fib(0) = 0, fib(1) = 1

    Note: This approach has O(2^n) time complexity.
          For large n, use Dynamic Programming (memoization) instead.
*/

#include <iostream>
using namespace std;

int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    return fib(n - 1) + fib(n - 2);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Fibonacci(" << num << ") = " << fib(num) << endl;

    cout << "\nFibonacci sequence up to " << num << " terms: ";
    for (int i = 0; i < num; i++) cout << fib(i) << " ";
    cout << endl;

    return 0;
}

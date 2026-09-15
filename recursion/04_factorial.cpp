/*
    Factorial of a Number using Recursion

    Example: 5! = 5 × 4 × 3 × 2 × 1 = 120

    Idea: factorial(n) = n * factorial(n-1)
          Base case: factorial(0) = factorial(1) = 1

    Note: 'int' works up to n=12, use 'long long' for larger values
*/

#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n == 0 || n == 1) return 1;

    return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << num << "! = " << factorial(num) << endl;

    return 0;
}

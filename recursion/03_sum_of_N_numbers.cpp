/*
    Sum of First N Numbers using Recursion

    Example: N = 5 → 1+2+3+4+5 = 15

    Idea: sum(N) = N + sum(N-1)
          Base case: sum(0) = 0

    Note: Can also be solved in O(1) using formula: N*(N+1)/2
*/

#include <iostream>
using namespace std;

int NnumbersSum(int N) {
    if (N == 0) return 0;

    return N + NnumbersSum(N - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Sum of 1 to " << num << " = " << NnumbersSum(num) << endl;

    return 0;
}

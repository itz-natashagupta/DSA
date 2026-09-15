/*
    Print N to 1 using Recursion

    Example: N = 5 → 5 4 3 2 1

    Idea: Print n first, then recurse with n-1
          Base case: stop when n == 0
*/

#include <iostream>
using namespace std;

void printNumbers(int n) {
    if (n == 0) return;

    cout << n << endl;

    printNumbers(n - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    printNumbers(num);

    return 0;
}

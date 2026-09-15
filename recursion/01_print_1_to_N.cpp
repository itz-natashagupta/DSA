/*
    Print 1 to N using Recursion

    Example: N = 5 → 1 2 3 4 5

    Idea: Start count from 1, print then recurse with count+1
          Base case: stop when count > n
*/

#include <iostream>
using namespace std;

void printNumbers(int n, int count = 1) {
    if (count > n) return;

    cout << count << endl;

    printNumbers(n, count + 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    printNumbers(num);

    return 0;
}

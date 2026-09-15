/*
    Count & Print all Prime Numbers from 2 to N
    Using Sieve of Eratosthenes Algorithm

    Example: N = 20 → 2 3 5 7 11 13 17 19

    How Sieve works:
    - Mark all numbers as prime (0)
    - For each prime i, mark all its multiples as not prime (1)
    - Print all numbers still marked as prime
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // 0 = prime, 1 = not prime
    int prime[num + 1];
    for (int i = 0; i <= num; i++) prime[i] = 0;

    for (int i = 2; i <= num; i++) {
        if (prime[i] == 0) {
            for (int j = i * i; j <= num; j += i)
                prime[j] = 1;
        }
    }

    cout << "Prime numbers from 2 to " << num << ": ";
    for (int i = 2; i <= num; i++) {
        if (prime[i] == 0) cout << i << " ";
    }
    cout << endl;

    return 0;
}

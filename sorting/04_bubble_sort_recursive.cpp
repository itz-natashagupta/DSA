/*
    Bubble Sort (Recursive)

    Idea: Each recursive call does one full pass of Bubble Sort,
          pushing the largest element to its correct position.
          Then recurse on the remaining n-1 elements.

    Base Case: Array of size 1 is already sorted.

    Time Complexity:  O(n²)
    Space Complexity: O(n) — due to recursion call stack

    Example: {13, 46, 24, 52, 20, 9}
             → {9, 13, 20, 24, 46, 52}
*/

#include <bits/stdc++.h>
using namespace std;

void bubbleSortRecursive(int arr[], int n) {
    // Base case: array of size 1 is sorted
    if (n == 1) return;

    // One pass: push largest to the end
    for (int j = 0; j <= n - 2; j++) {
        if (arr[j] > arr[j + 1]) {
            swap(arr[j], arr[j + 1]);
        }
    }

    // Recurse for the remaining unsorted part
    bubbleSortRecursive(arr, n - 1);
}

int main() {
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Sorting: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    bubbleSortRecursive(arr, n);

    cout << "After  Sorting: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}

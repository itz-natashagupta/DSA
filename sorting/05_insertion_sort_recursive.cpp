/*
    Insertion Sort (Recursive)

    Idea: Sort the first i elements, then insert the i-th element
          into its correct position using the inner while loop.
          Start i from 1 and recurse until i == n.

    Base Case: When i == n, the whole array is sorted.

    Time Complexity:  O(n²)
    Space Complexity: O(n) — due to recursion call stack

    Example: {13, 46, 24, 52, 20, 9}
             → {9, 13, 20, 24, 46, 52}
*/

#include <bits/stdc++.h>
using namespace std;

void insertionSortRecursive(int arr[], int i, int n) {
    // Base case: all elements are placed
    if (i == n) return;

    int j = i;
    // Shift elements to insert arr[i] in the correct position
    while (j > 0 && arr[j - 1] > arr[j]) {
        swap(arr[j - 1], arr[j]);
        j--;
    }

    // Recurse for the next element
    insertionSortRecursive(arr, i + 1, n);
}

int main() {
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Sorting: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    insertionSortRecursive(arr, 0, n);

    cout << "After  Sorting: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}

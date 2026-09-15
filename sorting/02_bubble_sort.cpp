/*
    Bubble Sort (Iterative)

    Idea: Repeatedly compare adjacent elements and swap if out of order.
          After each pass, the largest unsorted element "bubbles" to its
          correct position at the end.

    Time Complexity:  O(n²) worst/average, O(n) best (already sorted)
    Space Complexity: O(1) — in-place sorting

    Example: {13, 46, 24, 52, 20, 9}
             → {9, 13, 20, 24, 46, 52}
*/

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    vector<int> arr = {13, 46, 24, 52, 20, 9};

    cout << "Before Sorting: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    bubbleSort(arr);

    cout << "After  Sorting: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}

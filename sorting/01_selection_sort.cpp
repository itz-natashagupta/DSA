/*
    Selection Sort

    Idea: Find the minimum element in the unsorted part
          and place it at the beginning.

    Time Complexity:  O(n²) — always, even if already sorted
    Space Complexity: O(1)  — in-place sorting

    Example: {13, 46, 24, 52, 20, 9}
             → {9, 13, 20, 24, 46, 52}
*/

#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int mini = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[mini]) mini = j;
        }
        swap(arr[mini], arr[i]);
    }
}

int main() {
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Sorting: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    selectionSort(arr, n);

    cout << "After  Sorting: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}

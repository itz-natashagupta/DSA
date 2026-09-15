/*
    Insertion Sort (Iterative)

    Idea: Pick each element one by one and insert it into its
          correct position in the already-sorted left part.
          Like sorting a hand of playing cards.

    Time Complexity:  O(n²) worst/average, O(n) best (already sorted)
    Space Complexity: O(1) — in-place sorting

    Example: {13, 46, 24, 52, 20, 9}
             → {9, 13, 20, 24, 46, 52}
*/

#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Shift elements greater than key one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    vector<int> arr = {13, 46, 24, 52, 20, 9};

    cout << "Before Sorting: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    insertionSort(arr);

    cout << "After  Sorting: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}

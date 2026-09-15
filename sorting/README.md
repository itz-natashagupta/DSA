# 🔃 Sorting Algorithms in C++

A collection of fundamental sorting algorithms implemented in C++ as part of my DSA learning journey.

---

## 📁 Folder Structure

```
sorting/
├── 01_selection_sort.cpp          → Selection Sort (Iterative)
├── 02_bubble_sort.cpp             → Bubble Sort (Iterative)
├── 03_insertion_sort.cpp          → Insertion Sort (Iterative)
├── 04_bubble_sort_recursive.cpp   → Bubble Sort (Recursive)
└── 05_insertion_sort_recursive.cpp → Insertion Sort (Recursive)
```

---

## 📋 Algorithm Comparison

| # | Algorithm | Best | Average | Worst | Space | Stable |
|---|-----------|------|---------|-------|-------|--------|
| 01 | Selection Sort | O(n²) | O(n²) | O(n²) | O(1) | ❌ |
| 02 | Bubble Sort | O(n) | O(n²) | O(n²) | O(1) | ✅ |
| 03 | Insertion Sort | O(n) | O(n²) | O(n²) | O(1) | ✅ |
| 04 | Bubble Sort (Recursive) | O(n²) | O(n²) | O(n²) | O(n) | ✅ |
| 05 | Insertion Sort (Recursive) | O(n²) | O(n²) | O(n²) | O(n) | ✅ |

---

## 🧠 How Each Algorithm Works

### Selection Sort
Find the minimum in the unsorted part → place it at the front.
```
{13, 46, 24, 52, 20, 9}
 ^find min(9) → swap with 13
{9, 46, 24, 52, 20, 13} → repeat...
```

### Bubble Sort
Compare adjacent elements → swap if out of order → largest bubbles to end.
```
{13, 46, 24, 52, 20, 9}
Pass 1: largest (52) moves to end
Pass 2: second largest (46) moves to its place → ...
```

### Insertion Sort
Pick each element → insert it into its correct position in the sorted left part.
```
{13 | 46, 24, 52, 20, 9}   ← 13 sorted
{13, 46 | 24, 52, 20, 9}   ← insert 46
{13, 24, 46 | 52, 20, 9}   ← insert 24 → ...
```

---

## ⚙️ How to Compile & Run

```bash
g++ 01_selection_sort.cpp -o output.exe
./output.exe
```

Or open in **VS Code** and press `Ctrl+Shift+B` to build and run.

---

## 🛠️ Tech Stack

- **Language:** C++17
- **Compiler:** GCC (g++)
- **IDE:** Visual Studio Code

---

## 👨‍💻 Author

> Sorting my way through DSA — one algorithm at a time! 🚀

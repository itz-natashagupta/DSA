# 🔁 Recursion Programs in C++

A collection of recursion-based programs written in C++ as part of my DSA learning journey.

---

## 📁 Folder Structure

```
recursion/
├── 01_print_1_to_N.cpp      → Print 1 to N using Recursion
├── 02_print_N_to_1.cpp      → Print N to 1 using Recursion
├── 03_sum_of_N_numbers.cpp  → Sum of First N Numbers
├── 04_factorial.cpp         → Factorial of a Number
├── 05_fibonacci.cpp         → Fibonacci Number
└── 06_string_palindrome.cpp → Check if String is Palindrome
```

---

## 📋 Program Descriptions

| # | Program | Description | Example |
|---|---------|-------------|---------|
| 01 | Print 1 to N | Print numbers ascending recursively | N=5 → `1 2 3 4 5` |
| 02 | Print N to 1 | Print numbers descending recursively | N=5 → `5 4 3 2 1` |
| 03 | Sum of N Numbers | Add 1+2+...+N recursively | N=5 → `15` |
| 04 | Factorial | Multiply n × (n-1) × ... × 1 | 5! → `120` |
| 05 | Fibonacci | fib(n) = fib(n-1) + fib(n-2) | fib(6) → `8` |
| 06 | String Palindrome | Check if string reads same both ways | `"madam"` → Yes ✅ |

---

## 🧠 How Recursion Works

Every recursive function has two key parts:

```
1. Base Case  → stops the recursion (avoids infinite loop)
2. Recursive Case → calls itself with a smaller/simpler input
```

```cpp
int factorial(int n) {
    if (n == 0) return 1;         // ← Base Case
    return n * factorial(n - 1); // ← Recursive Case
}
```

---

## ⚙️ How to Compile & Run

```bash
g++ 01_print_1_to_N.cpp -o output.exe
./output.exe
```

Or open in **VS Code** and press `Ctrl+Shift+B` to build and run the active file.

---

## 🛠️ Tech Stack

- **Language:** C++17
- **Compiler:** GCC (g++)
- **IDE:** Visual Studio Code

---

## 👨‍💻 Author

> Mastering recursion — thinking smaller to solve bigger! 🚀

/*
    Check if a String is Palindrome using Recursion

    A string is palindrome if it reads the same forwards and backwards.
    Example: "madam"  → Palindrome ✅
             "racecar" → Palindrome ✅
             "hello"  → NOT Palindrome ❌

    Idea: Compare first and last characters, then recurse inward
          Base case: if left >= right, all characters matched → true
*/

#include <iostream>
using namespace std;

bool isPalindrome(string& s, int left, int right) {
    if (left >= right) return true;

    if (s[left] != s[right]) return false;

    return isPalindrome(s, left + 1, right - 1);
}

bool palindromeCheck(string& s) {
    return isPalindrome(s, 0, s.length() - 1);
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    if (palindromeCheck(s))
        cout << "YES! \"" << s << "\" is a Palindrome. ✅" << endl;
    else
        cout << "NO! \"" << s << "\" is NOT a Palindrome. ❌" << endl;

    return 0;
}

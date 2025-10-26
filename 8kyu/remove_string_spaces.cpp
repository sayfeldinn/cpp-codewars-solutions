// ==========================
// 8 kyu – Remove String Spaces
// https://www.codewars.com/kata/57eae20f5500ad98e50002c5
// ==========================
//
// Write a function that removes the spaces from the string, then returns the resultant string.
//
// Example:
//   no_space("8 j 8   mBliB8g  imjB8B8  jl  B") ➞ "8j8mBliB8gimjB8B8jlB"
//
// ==========================

#include <string>

std::string no_space(std::string txt) {
    std::string result = "";
    for (int i = 0; i < txt.length(); i++) {
        if (txt[i] != ' ') {
            result += txt[i];
        }
    }
    return result;
}

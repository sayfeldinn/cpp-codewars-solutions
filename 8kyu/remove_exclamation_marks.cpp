// ==========================
// 8 kyu – Remove exclamation marks
// https://www.codewars.com/kata/57a0885cbb9944e24c00008e
// ==========================
//
// Remove all exclamation marks from a given string.
//
// Example:
// removeExclamationMarks("Hello!") ➞ "Hello"
// removeExclamationMarks("Hi! Hello!!") ➞ "Hi Hello"
//

#include <string>

std::string removeExclamationMarks(std::string str) {
    std::string clean_str = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != '!') {
            clean_str += str[i];
        }
    }
    return clean_str;
}

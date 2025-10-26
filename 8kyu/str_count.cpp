// ==========================
// 8 kyu – Count Occurrences of Character in String
// https://www.codewars.com/kata/5865918c6b569962950002a1
// ==========================
//
// Write a function that takes two arguments:
//   - a string (`word`)
//   - a character (`letter`)
//
// The function should return the number of times
// the specified character appears in the string.
//
// Example:
//   strCount("Hello", 'o') ➞ 1
//   strCount("Hello", 'l') ➞ 2
//   strCount("", 'z') ➞ 0
//
// ==========================

#include <string>

int strCount(std::string word, char letter) {
    int count = 0;
    for (int i = 0; i < word.length(); i++) {
        if (word[i] == letter) {
            count++;
        }
    }
    return count;
}

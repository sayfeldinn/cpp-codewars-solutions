// ==========================
// 8 kyu – Reversed Strings
// https://www.codewars.com/kata/5168bb5dfe9a00b126000018
// ==========================
//
// Write a function that takes in a string and returns a new string
// with the characters in reverse order.
//
// Example:
// reverseString("world") ➞ "dlrow"
// reverseString("code")  ➞ "edoc"
//

#include <string>

std::string reverseString(const std::string &str)
{
    std::string reversed = "";
    for (int i = str.length() - 1; i >= 0; i--)
    {
        reversed += str[i];
    }
    return reversed;
}

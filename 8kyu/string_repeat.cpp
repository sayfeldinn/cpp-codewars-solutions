// ==========================
// 8 kyu – String repeat
// https://www.codewars.com/kata/57a0e5c372292dd76d000d7e
// ==========================
//
// Write a function which accepts a non-negative integer `repeat`
// and a string `str`, and returns a string consisting of `str`
// repeated `repeat` times.
//
// Examples:
//   repeat_str(6, "I")     ➞ "IIIIII"
//   repeat_str(5, "Hello") ➞ "HelloHelloHelloHelloHello"
//
// ==========================

#include <string>

std::string repeat_str(size_t repeat, const std::string& str) {
    std::string result = "";
    for (int i = 0; i < repeat; i++) {
        result += str;
    }
    return result;
}

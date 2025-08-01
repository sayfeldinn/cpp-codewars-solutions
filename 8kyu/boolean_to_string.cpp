// ==========================
// 8 kyu – Boolean to String
// https://www.codewars.com/kata/551b4501ac0447318f0009cd
// ==========================
//
// Implement a function which converts the boolean value `true` to the string `"true"`,
// and `false` to the string `"false"`.
//
// Example:
// boolean_to_string(true) ➞ "true"
// boolean_to_string(false) ➞ "false"
//

#include <string>

std::string boolean_to_string(bool b) {
    return b ? "true" : "false";
}

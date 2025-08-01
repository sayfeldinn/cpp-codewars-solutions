// ==========================
// 8 kyu – Invert values
// https://www.codewars.com/kata/5899dc03bc95b1bf1b0000ad
// ==========================
//
// Given a set of numbers, return the additive inverse of each.
// Each positive becomes negative, and vice versa.
//
// Examples:
// [1, 2, 3]      ➞ [-1, -2, -3]
// [1, -2, 3]     ➞ [-1, 2, -3]
// []            ➞ []
//

#include <vector>

std::vector<int> invert(std::vector<int> values)
{
    std::vector<int> inverted_values;
    for (int i = 0 ; i < values.size(); i++)
    {
        inverted_values.push_back(values[i] * -1);
    }
    return inverted_values;
}

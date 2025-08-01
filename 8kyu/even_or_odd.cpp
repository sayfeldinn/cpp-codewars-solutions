// ==========================
// 8 kyu – Even or Odd
// https://www.codewars.com/kata/53da3dbb4a5168369a0000fe
// ==========================
//
// Create a function that takes an integer as an argument
// and returns "Even" for even numbers or "Odd" for odd numbers.
//
// Example:
// even_or_odd(2) ➞ "Even"
// even_or_odd(7) ➞ "Odd"
//

#include <string>

std::string even_or_odd(int number) 
{
    return number % 2 == 0 ? "Even" : "Odd";
}

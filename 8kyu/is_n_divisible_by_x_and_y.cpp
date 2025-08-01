// ==========================
// 8 kyu – Is n divisible by x and y?
// https://www.codewars.com/kata/5545f109004975ea66000086
// ==========================
//
// Create a function that checks if a number `n` is divisible by two numbers `x` and `y`.
//
// Return true if `n` is divisible by both `x` and `y`, otherwise return false.
//
// Example:
// isDivisible(3,1,3)   ➞ true
// isDivisible(12,3,4) ➞ true
// isDivisible(3,1,2)  ➞ false
//

bool isDivisible(int n, int x, int y) {
    return n % x == 0 && n % y == 0;
}

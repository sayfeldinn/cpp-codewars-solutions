// ==========================
// 8 kyu – Simple multiplication
// https://www.codewars.com/kata/583710ccaa6717322c000105
// ==========================
//
// This kata is about multiplying a given number by eight if it is even,
// and by nine otherwise.
//
// Example:
// simpleMultiplication(2) ➞ 16  // even → 2 * 8
// simpleMultiplication(3) ➞ 27  // odd → 3 * 9

int simpleMultiplication(int a) {
    return a % 2 == 0 ? a * 8 : a * 9;
}

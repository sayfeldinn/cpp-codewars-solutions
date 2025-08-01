// ==========================
// 8 kyu – Keep Hydrated! kata
// https://www.codewars.com/kata/582cb0224e56e068d800003c
// ==========================
//
// Nathan loves cycling.
// Because Nathan knows it is important to stay hydrated,
// he drinks 0.5 litres of water per hour of cycling.
//
// You get given the time in hours and you need to return
// the number of litres Nathan will drink, rounded down.
//
// Example:
// litres(3) ➞ 1
// litres(6.7) ➞ 3
// litres(11.8) ➞ 5

int litres(double time) {
    return time * 0.5;
}

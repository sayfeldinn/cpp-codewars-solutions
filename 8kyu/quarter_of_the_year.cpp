// ==========================
// 8 kyu – Quarter of the year
// https://www.codewars.com/kata/5ce9c1000bab0b001134f5af
// ==========================
//
// Given a month as an integer from 1 to 12, return the quarter of the year it belongs to.
// 
// Example:
// month 1 → Q1
// month 3 → Q1
// month 4 → Q2
// month 11 → Q4
//

int quarter_of(int month) {
    // Adding 2 before dividing by 3 effectively rounds up to the correct quarter.
    // For example:
    //  month = 1 => (1+2)/3 = 1
    //  month = 4 => (4+2)/3 = 2
    //  month = 11 => (11+2)/3 = 4
    return (month + 2) / 3;
}

// ==========================
// 8 kyu – Century From Year
// https://www.codewars.com/kata/5a3fe3dde1ce0e8ed6000097
// ==========================
//
// Given a year, return the century it is in.
// The first century spans from year 1 up to and including year 100,
// the second from 101 to 200, and so on.
//
// Example:
// centuryFromYear(1705) ➞ 18
// centuryFromYear(1900) ➞ 19
// centuryFromYear(1601) ➞ 17
// centuryFromYear(2000) ➞ 20

int centuryFromYear(int year) 
{
    if (year % 100 == 0)
        return year / 100;
    else
        return year / 100 + 1;
}

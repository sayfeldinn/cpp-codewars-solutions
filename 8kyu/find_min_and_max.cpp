// ==========================
// 8 kyu – Find Maximum and Minimum Values of a List kata
// https://www.codewars.com/kata/577a98a6ae28071780000989
// ==========================
//
// Return the minimum and maximum number in a list.
//
// Example:
// min({-52, 56, 30, 29, -54, 0, -110}) ➞ -110
// max({4,6,2,1,9,63,-134,566}) ➞ 566

#include <vector>
using namespace std;

int min(vector<int> list) {
    int minNum = list[0];
    for (size_t i = 1; i < list.size(); ++i) {
        if (list[i] < minNum) {
            minNum = list[i];
        }
    }
    return minNum;
}

int max(vector<int> list) {
    int maxNum = list[0];
    for (size_t i = 1; i < list.size(); ++i) {
        if (list[i] > maxNum) {
            maxNum = list[i];
        }
    }
    return maxNum;
}

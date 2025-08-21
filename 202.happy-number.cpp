/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 */

// @lc code=start
class Solution {
public:
    bool isHappy(int n) {
        while (n != 1 && n != 4) {
            int sum = 0;
            while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
            }
            n = sum;
        }
        return n == 1;
    }
};
// @lc code=end


/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution
{
public:
    int reverse(int x)
    {
        int rev = 0;
        while (x != 0)
        {
            if (rev > INT_MAX / 10 || rev < INT_MIN / 10) return 0;
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        return rev;
    }
};
// @lc code=end

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
        long long rev = 0;
        while (x != 0)
        {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        return (int)rev;
    }
};
// @lc code=end

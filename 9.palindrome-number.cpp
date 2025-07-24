/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        if (x == 0)
            return true;

        long long temp = x, temp2 = 0;
        while (x)
        {
            temp2 = temp2 * 10 + x % 10;
            x /= 10;
        }
        if (temp == temp2)
        {
            return true;
        }
        return false;
    }
};
// @lc code=end

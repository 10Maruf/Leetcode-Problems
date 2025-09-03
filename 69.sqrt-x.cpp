/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution
{
public:
    int mySqrt(int x)
    {
        if (x < 2)
            return x;
        int left = 1, right = x / 2, ans = 0;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (mid <= x / mid)
            {
                ans = mid;
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        return ans;
    }
};
// @lc code=end

/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution
{
public:
    int romanToInt(string s)
    {
        int len = s.length();
        int ans = 0;
        string roman = "IVXLCDM";
        vector<int> values = {1, 5, 10, 50, 100, 500, 1000};
        for (int i = 0; i < len; ++i)
        {
            int value = values[roman.find(s[i])];
            if (i + 1 < len && roman.find(s[i]) < roman.find(s[i + 1]))

                ans -= value;

            else

                ans += value;
        }
        return ans;
    }
};
// @lc code=end

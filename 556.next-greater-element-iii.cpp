/*
 * @lc app=leetcode id=556 lang=cpp
 *
 * [556] Next Greater Element III
 */

// @lc code=start
class Solution
{
public:
    int nextGreaterElement(int n)
    {
        string s = to_string(n);
        int len = s.size();

        int i = -1;
        for (int k = len - 2; k >= 0; k--)
        {
            if (s[k] < s[k + 1])
            {
                i = k;
                break;
            }
        }

        if (i == -1)
        {
            return -1;
        }

        int j = -1;
        for (int k = len - 1; k > i; k--)
        {
            if (s[k] > s[i])
            {
                j = k;
                break;
            }
        }
        swap(s[i], s[j]);

        reverse(s.begin() + i + 1, s.end());

        long long res = stoll(s);
        if (res > INT_MAX)
        {
            return -1;
        }
        else
        {
            return res;
        }
    }
};
// @lc code=end

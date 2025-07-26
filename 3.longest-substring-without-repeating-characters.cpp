/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int maxlen = 0;
        for (int i = 0; i < s.size(); i++)
        {
            unordered_set<char> chars;

            for (int j = i; j < s.size(); j++)
            {
                if (chars.count(s[j]) == 1)
                    break;

                chars.insert(s[j]);
                maxlen = max(maxlen, j - i + 1);
            }
        }
        return maxlen;
    }
};
// @lc code=end

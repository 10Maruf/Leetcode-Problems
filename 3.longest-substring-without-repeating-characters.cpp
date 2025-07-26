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
        unordered_map<char, int> mp;
        int maxlen = 0, left = 0;
        for (int right = 0; right < s.size(); right++)
        {
            if (mp.count(s[right]) && mp[s[right]] >= left)
            {
                left = mp[s[right]] + 1;
            }
            mp[s[right]] = right;
            maxlen = max(maxlen, right - left + 1);
        }
        return maxlen;
    }
};
// @lc code=end

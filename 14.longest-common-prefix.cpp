/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.empty())
            return "";

        string prefix = "";
        int minLen = strs[0].size();

        for (int i = 1; i < strs.size(); i++)
        {
            minLen = min(minLen, (int)strs[i].size());
        }

        for (int i = 0; i < minLen; i++)
        {
            char ch = strs[0][i];
            for (int j = 1; j < strs.size(); j++)
            {
                if (strs[j][i] != ch)
                {
                    return prefix;
                }
            }
            prefix += ch;
        }

        return prefix;
    }
};
// @lc code=end

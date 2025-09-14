/*
 * @lc app=leetcode id=438 lang=cpp
 *
 * [438] Find All Anagrams in a String
 */

// @lc code=start
class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        int lenS = s.size(), lenP = p.size();
        if (lenS < lenP)
            return {};

        vector<int> freqP(26, 0), freqS(26, 0);
        for (char c : p)
            freqP[c - 'a']++;
        for (int i = 0; i < lenP; i++)
            freqS[s[i] - 'a']++;

        vector<int> res;
        if (freqS == freqP)
            res.push_back(0);

        for (int i = lenP; i < lenS; i++)
        {
            freqS[s[i] - 'a']++;
            freqS[s[i - lenP] - 'a']--;
            if (freqS == freqP)
                res.push_back(i - lenP + 1);
        }
        return res;
    }
};

// @lc code=end

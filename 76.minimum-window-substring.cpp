/*
 * @lc app=leetcode id=76 lang=cpp
 *
 * [76] Minimum Window Substring
 */

// @lc code=start
class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty()) return "";

        unordered_map<char, int> dictT;
        for (char c : t) {
            dictT[c]++;
        }

        int required = dictT.size();
        int l = 0, r = 0;
        int formed = 0;
        unordered_map<char, int> windowCounts;

        int ans[] = {-1, 0, 0}; // length, left, right

        while (r < s.size()) {
            char c = s[r];
            windowCounts[c]++;

            if (dictT.count(c) && windowCounts[c] == dictT[c]) {
                formed++;
            }

            while (l <= r && formed == required) {
                c = s[l];

                if (ans[0] == -1 || r - l + 1 < ans[0]) {
                    ans[0] = r - l + 1;
                    ans[1] = l;
                    ans[2] = r;
                }

                windowCounts[c]--;
                if (dictT.count(c) && windowCounts[c] < dictT[c]) {
                    formed--;
                }
                l++;
            }
            r++;
        }

        return ans[0] == -1 ? "" : s.substr(ans[1], ans[0]);
    }
    
};
// @lc code=end


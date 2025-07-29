/*
 * @lc app=leetcode id=6 lang=cpp
 *
 * [6] Zigzag Conversion
 */

// @lc code=start
class Solution
{
public:
    string convert(string s, int numRows)
    {
        if (numRows == 1 || s.size() <= numRows)
            return s;
        vector<vector<char>> zigzag(numRows);
        int row = 0, step = 1;
        for (char c : s)
        {
            zigzag[row].push_back(c);
            if (row == 0)
                step = 1;
            else if (row == numRows - 1)
                step = -1;
            row += step;
        }
        string result;
        for (const auto &r : zigzag)
        {
            result.append(r.begin(), r.end());
        }
        return result;
    }
};
// @lc code=end

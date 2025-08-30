/*
 * @lc app=leetcode id=43 lang=cpp
 *
 * [43] Multiply Strings
 */

// @lc code=start
class Solution
{
public:
    string multiply(string num1, string num2)
    {
        string result;
        int m = num1.size();
        int n = num2.size();
        result.resize(m + n, '0'); // Initialize with '0' characters
        for (int i = m - 1; i >= 0; i--)
        {
            for (int j = n - 1; j >= 0; j--)
            {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int sum = mul + (result[i + j + 1] - '0');
                result[i + j + 1] = sum % 10 + '0';
                result[i + j] = result[i + j] + sum / 10;
            }
        }
        // Remove leading zeros
        while (result.size() > 1 && result[0] == '0')
        {
            result.erase(result.begin());
        }
        return result;
    }
};
// @lc code=end

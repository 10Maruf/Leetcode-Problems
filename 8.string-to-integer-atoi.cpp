/*
 * @lc app=leetcode id=8 lang=cpp
 *
 * [8] String to Integer (atoi)
 */

// @lc code=start
class Solution
{
public:
    int myAtoi(string s)
    {
        int len = s.length();
        int i = 0;
        while (i < len && s[i] == ' ')
            i++;
        if (i == len)
            return 0;

        bool negative = false;
        if (s[i] == '-')
        {
            negative = true;
            i++;
        }
        else if (s[i] == '+')
        {
            i++;
        }

        int result = 0;
        while (i < len && isdigit(s[i]))
        {
            int digit = s[i] - '0';
            if (result > (INT_MAX - digit) / 10)
            {
                return negative ? INT_MIN : INT_MAX;
            }
            result = result * 10 + digit;
            i++;
        }
        return negative ? -result : result;
    }
};
// @lc code=end

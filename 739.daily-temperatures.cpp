/*
 * @lc app=leetcode id=739 lang=cpp
 *
 * [739] Daily Temperatures
 */

// @lc code=start
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size(), 0);
        for (int i = 0; i < temperatures.size(); i++)
        {
           for (int j = i + 1; j < temperatures.size(); j++)
           {
               if (temperatures[j] > temperatures[i])
               {
                   result[i] = j - i;
                   break;
               }
           }
        }
        return result;
    }
};
// @lc code=end




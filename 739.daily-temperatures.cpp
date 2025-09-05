/*
 * @lc app=leetcode id=739 lang=cpp
 *
 * [739] Daily Temperatures
 */

// @lc code=start
class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        vector<int> result(temperatures.size(), 0);
        stack<int> index;
        for (int i = 0; i < temperatures.size(); ++i)
        {
            while (!index.empty() && temperatures[i] > temperatures[index.top()])
            {
                int prevIndex = index.top();
                index.pop();
                result[prevIndex] = i - prevIndex;
            }
            index.push(i);
        }
        return result;
    }
};
// @lc code=end

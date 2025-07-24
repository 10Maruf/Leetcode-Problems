/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
       int temp=target;
        for (int i = 0; i < nums.size(); ++i) {
            temp -= nums[i];
            for (int j = i + 1; j < nums.size(); ++j) {
                if (nums[j] == temp) {
                    return {i, j};
                }
            }
            temp = target; 
        }
        return {};
    }
};
// @lc code=end

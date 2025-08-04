/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {

        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        set<vector<int>> s;
        for (int i = 0; i < nums.size(); i++)
        {
            nums[i];
            for (int j = i + 1; j < nums.size(); j++)
            {
                for (int k = j + 1; k < nums.size(); k++)
                {
                    if (nums[i] + nums[j] + nums[k] == 0)
                    {
                        vector<int> temp = {nums[i], nums[j], nums[k]};
                        sort(temp.begin(), temp.end());
                        s.insert(temp);
                    }
                }
            }
        }
        for (auto i : s)
        {
            ans.push_back(i);
        }
        return ans;
    }
};
// @lc code=end

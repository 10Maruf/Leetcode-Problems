/*
 * @lc app=leetcode id=239 lang=cpp
 *
 * [239] Sliding Window Maximum
 */

// @lc code=start
class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        int n = nums.size();
        if (k == 1)
            return nums;

        for (int i = 1; i < n; i++)
        {
            nums[i] = max(nums[i], nums[i - 1]);
        }
        vector<int> result;
        for (int i = k - 1; i < n; i++)
        {
            result.push_back(nums[i]);
        }
        return result;
    }
};
// 1 3 [3 3 5 5 6 7]ans array
// @lc code=end

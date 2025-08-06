/*
 * @lc app=leetcode id=16 lang=cpp
 *
 * [16] 3Sum Closest
 */

// @lc code=start
class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        int res = nums[0] + nums[1] + nums[2];
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            int left = i + 1, right = nums.size() - 1;
            while (left < right)
            {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == target)
                {
                    return sum;
                }
                else if (sum < target)
                {
                    left++;
                }
                else
                {
                    right--;
                }
                if (abs(sum - target) < abs(res - target))
                {
                    res = sum;
                }
            }
        }
        return res;
    }
};
// @lc code=end

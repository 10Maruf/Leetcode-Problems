/*
 * @lc app=leetcode id=220 lang=cpp
 *
 * [220] Contains Duplicate III
 */

// @lc code=start
class Solution
{
public:
    bool containsNearbyAlmostDuplicate(vector<int> &nums, int indexDiff, int valueDiff)
    {
        int n = nums.size();
        map<long long, int> mp;

        for (int i = 0; i < n; i++)
        {
            long long num = nums[i];
            auto it = mp.lower_bound(num - valueDiff);
            if (it != mp.end() && abs(it->first - num) <= valueDiff)
            {
                return true;
            }
            mp[num] = i;
            if (i - indexDiff >= 0)
            {
                mp.erase(nums[i - indexDiff]);
            }
        }
        return false;
    }
};
// @lc code=end

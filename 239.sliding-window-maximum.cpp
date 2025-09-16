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
        vector<int> result;
        deque<int> dq;

        for (int i = 0; i < nums.size(); i++)
        {

            while (!dq.empty() && dq.front() <= i - k)
            {
                dq.pop_front();
            }

            while (!dq.empty() && nums[dq.back()] <= nums[i])
            {
                dq.pop_back();
            }

            dq.push_back(i);

            if (i >= k - 1)
            {
                result.push_back(nums[dq.front()]);
            }
        }
        return result;
    }
};
// 1 3 [3 3 5 5 6 7]ans array
// @lc code=end

/*
 * @lc app=leetcode id=496 lang=cpp
 *
 * [496] Next Greater Element I
 */

// @lc code=start
class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> result;
        unordered_map<int, int> nextGreaterMap;
        stack<int> s;

        for (int num : nums2)
        {
            while (!s.empty() && num > s.top())
            {
                nextGreaterMap[s.top()] = num;
                s.pop();
            }
            s.push(num);
        }

        while (!s.empty())
        {
            nextGreaterMap[s.top()] = -1;
            s.pop();
        }

        for (int num : nums1)
        {
            result.push_back(nextGreaterMap[num]);
        }

        return result;
    }
};
// @lc code=end

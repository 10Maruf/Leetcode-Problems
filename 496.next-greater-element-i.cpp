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
        for (int i = 0; i < nums1.size(); ++i)
        {
            int j = 0;

            while (j < nums2.size() && nums2[j] != nums1[i])
            {
                ++j;
            }
            while (j < nums2.size() && nums2[j] <= nums1[i])
            {
                ++j;
            }
            if (j < nums2.size())
            {
                nums1[i] = nums2[j];
            }
            else
            {
                nums1[i] = -1;
            }
        }
        return nums1;
    }
};
// @lc code=end
